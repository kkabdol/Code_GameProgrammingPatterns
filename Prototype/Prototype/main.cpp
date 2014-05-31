//
//  main.cpp
//  Prototype
//
//  Created by Seonghyeon Choe on 5/31/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Spawner.h"

int main(int argc, const char * argv[])
{
    Monster* monster = nullptr;
    
    GhostSpawner gs;
    monster = gs.spawnMonster();
    monster->scream();
    delete monster;
    
    DemonSpawner ds;
    monster = ds.spawnMonster();
    monster->scream();
    delete monster;
    
    SorcerorSpawner ss;
    monster = ss.spawnMonster();
    monster->scream();
    delete monster;
    
    return 0;
}

