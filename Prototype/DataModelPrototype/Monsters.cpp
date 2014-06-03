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

Monsters::Monsters(const std::string& filename) {
    std::stringstream ss;
    std::ifstream ifs(filename);

    ss << ifs.rdbuf();
    node = json_parse(ss.str().c_str());
    assert(json_type(node) == JSON_ARRAY);
    
    ifs.close();
}

Monsters::~Monsters() {
    json_delete(node);
}

size_t Monsters::size() {
    return json_size(node);
}

void Monsters::ShowData(int index) {
    assert(index >= 0 && index < size());
    JSONNODE* monster = json_at(node, index);
    
    for (JSONNODE_ITERATOR it = json_begin(monster); it != json_end(monster); ++it) {
        PrintNode(*it);
    }
    
    std::cout << std::endl;
}

void Monsters::PrintNode(JSONNODE* node) {
    if (json_type(node) == JSON_ARRAY) {
        for (int i = 0; i < json_size(node); ++i) {
            std::cout << json_name(node) << " " << i+1 << " : " << json_as_string(json_at(node, i)) << std::endl;
        }
    } else {
        std::cout << json_name(node) << " : ";
        
        switch (json_type(node)) {
            case JSON_NUMBER:
                std::cout << json_as_int(node);
                break;
            case JSON_STRING:
                std::cout << json_as_string(node);
                break;
                
            default:
                break;
        }
        
        std::cout << std::endl;
    }
}