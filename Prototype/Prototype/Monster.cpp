//
//  Monster.cpp
//  Prototype
//
//  Created by Seonghyeon Choe on 5/31/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Monster.h"
#include <iostream>

Monster* Ghost::clone() {
    return new Ghost();
}
void Ghost::scream() {
    std::cout << "I'm a ghost!" << std::endl;
}

Monster* Demon::clone() {
    return new Demon();
}
void Demon::scream() {
    std::cout << "I'm a demon!" << std::endl;
}

Monster* Sorceror::clone() {
    return new Sorceror();
}
void Sorceror::scream() {
    std::cout << "I'm a sorceror!" << std::endl;
}