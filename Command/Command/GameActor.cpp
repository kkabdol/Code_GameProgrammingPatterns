//
//  GameActor.cpp
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "GameActor.h"
#include <iostream>

GameActor::GameActor(std::string jump, std::string fire) : jumpStr(jump), fireStr(fire) {
    
}
void GameActor::jump() const {
    std::cout << jumpStr << std::endl;
}
void GameActor::fire() const {
    std::cout << fireStr << std::endl;
}