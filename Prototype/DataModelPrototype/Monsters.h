//
//  Monsters.h
//  Prototype
//
//  Created by Seonghyeon Choe on 6/3/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Prototype__Monsters__
#define __Prototype__Monsters__

#include "libjson.h"
#include <string>

class Monsters {
public:
    Monsters(const char* filename);
    ~Monsters();
    size_t size();
    void ShowData(int index);
    void ShowData(const char* monsterName);
    
private:
    JSONNODE* GetJsonFromFile(const char* filename);
    void ShowData(JSONNODE* monster);
    void PrintAttribute(JSONNODE* monster, const char* attributeName);
    JSONNODE* GetMonster(const char* monsterName);
    
    JSONNODE* node;
};

#endif /* defined(__Prototype__Monsters__) */
