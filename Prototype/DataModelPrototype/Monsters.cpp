//
//  Monsters.cpp
//  Prototype
//
//  Created by Seonghyeon Choe on 6/3/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Monsters.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <cassert>

Monsters::Monsters(const char* filename) {
    node = GetJsonFromFile(filename);
}

Monsters::~Monsters() {
    json_delete(node);
}

size_t Monsters::size() {
    return json_size(node);
}

void Monsters::ShowData(int index) {
    JSONNODE* monster = json_at(node, index);
    ShowData(monster);
}

void Monsters::ShowData(const char* monsterName) {
    JSONNODE* monster = GetMonster(monsterName);
    if (monster) {
        ShowData(monster);
    }
}

void Monsters::ShowData(JSONNODE* monster) {
    PrintAttribute(monster, "name");
    PrintAttribute(monster, "minHealth");
    PrintAttribute(monster, "maxHealth");
    PrintAttribute(monster, "resists");
    PrintAttribute(monster, "weaknesses");
    PrintAttribute(monster, "spells");
    PrintAttribute(monster, "attacks");
    std::cout << std::endl;
}

JSONNODE* Monsters::GetJsonFromFile(const char* filename) {
    std::stringstream ss;
    std::ifstream ifs(filename);
    
    ss << ifs.rdbuf();
    JSONNODE* json = json_parse(ss.str().c_str());
    assert(json_type(json) == JSON_ARRAY);
    
    ifs.close();
    
    return json;
}

void Monsters::PrintAttribute(JSONNODE* monster, const char* attributeName) {
    
    JSONNODE* att = json_get(monster, attributeName);
    
    if (att == nullptr) {
        
        char* name = json_as_string(json_get(monster, "prototype"));
        JSONNODE* prototype = GetMonster(name);
        
        if (prototype != nullptr) {
            
            att = json_get(prototype, attributeName);
            
            if (att == nullptr) {
                return;
            }
        }
    }
    
    
    if (json_type(att) == JSON_ARRAY)
    {
        for (int i = 0; i < json_size(att); ++i) {
            std::cout << attributeName << " " << i+1 << " : " << json_as_string(json_at(att, i)) << std::endl;
        }
    }
    else
    {
        std::cout << attributeName << " : ";
        
        switch (json_type(att)) {
            case JSON_NUMBER:
                std::cout << json_as_int(att);
                break;
            case JSON_STRING:
                std::cout << json_as_string(att);
                break;
                
            default:
                break;
        }
        
        std::cout << std::endl;
    }
}

JSONNODE* Monsters::GetMonster(const char* monsterName) {
    for (int i = 0; i < json_size(node); ++i) {
        JSONNODE* monster = json_at(node, i);
        if (strcmp(json_as_string(json_get(monster, "name")), monsterName) == 0) {
            return monster;
        }
    }
    
    return nullptr;
}