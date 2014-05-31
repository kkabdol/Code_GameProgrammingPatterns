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
    Spawner* spawner;
    
    spawner = new SpawnerFor<Ghost>();
    monster = spawner->spawnMonster();
    monster->scream();
    delete spawner;
    delete monster;
    
    spawner = new SpawnerFor<Demon>();
    monster = spawner->spawnMonster();
    monster->scream();
    delete spawner;
    delete monster;
    
    spawner = new SpawnerFor<Sorceror>();
    monster = spawner->spawnMonster();
    monster->scream();
    delete spawner;
    delete monster;

    return 0;
}

