//
//  Monster.cpp
//  Prototype
//
//  Created by Seonghyeon Choe on 5/31/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Monster.h"
#include <iostream>

void Ghost::scream() {
    std::cout << "I'm a ghost!" << std::endl;
}

void Demon::scream() {
    std::cout << "I'm a demon!" << std::endl;
}

void Sorceror::scream() {
    std::cout << "I'm a sorceror!" << std::endl;
}