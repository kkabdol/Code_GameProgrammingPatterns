//
//  main.cpp
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/11/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#include <iostream>

#include "World.h"
#include "Skeleton.h"
#include "Statue.h"

int main(int argc, const char * argv[])
{
    World world;
    Skeleton skeleton;
    Statue statue(10);
    
    world.addEntity(&skeleton);
    world.addEntity(&statue);
    
    world.gameLoop();

    return 0;
}

