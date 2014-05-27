//
//  World.h
//  Flyweight
//
//  Created by Seonghyeon Choe on 5/27/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Flyweight__World__
#define __Flyweight__World__

#include "Terrain.h"

const int WIDTH = 5;
const int HEIGHT = 5;

const Texture GRASS_TEXTURE = '*';
const Texture HILL_TEXTURE = '^';
const Texture RIVER_TEXTURE = '~';

class World
{
public:
    World() :
    grassTerrain_(1, false, GRASS_TEXTURE),
    hillTerrain_(3, false, HILL_TEXTURE),
    riverTerrain_(2, true, RIVER_TEXTURE)
    {
        generateTerrain();
    }
    
    void draw();
    
private:
    void generateTerrain();
    
    Terrain* tiles_[WIDTH][HEIGHT];
    
    Terrain grassTerrain_;
    Terrain hillTerrain_;
    Terrain riverTerrain_;
};

#endif /* defined(__Flyweight__World__) */
