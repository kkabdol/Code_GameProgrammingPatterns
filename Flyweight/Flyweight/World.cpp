//
//  World.cpp
//  Flyweight
//
//  Created by Seonghyeon Choe on 5/27/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "World.h"
#include <cstdlib>
#include <iostream>

void World::draw() {
    for (int y = HEIGHT-1; y >= 0 ; --y) {
        for (int x = 0; x < WIDTH; ++x) {
            tiles_[y][x]->draw();
            std::cout << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void World::generateTerrain() {
    srand(static_cast<unsigned int>(time(nullptr)));
    
    for (int y = 0; y < HEIGHT; ++y) {
        for (int x = 0; x < WIDTH; ++x) {
            if (rand() % 10 == 0) {
                tiles_[y][x] = &hillTerrain_;
            }
            else {
                tiles_[y][x] = &grassTerrain_;
            }
        }
    }
    
    int x = rand() % WIDTH;
    for (int y = 0; y < HEIGHT; ++y) {
        tiles_[y][x] = &riverTerrain_;
    }
}