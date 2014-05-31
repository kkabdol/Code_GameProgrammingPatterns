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
    Ghost ghost;
    Demon demon;
    Sorceror sorceror;
    Monster* monster = nullptr;
    
    Spawner gs = Spawner(&ghost);
    monster = gs.spawnMonster();
    monster->scream();
    delete monster;
    
    Spawner ds = Spawner(&demon);
    monster = ds.spawnMonster();
    monster->scream();
    delete monster;
    
    Spawner ss = Spawner(&sorceror);
    monster = ss.spawnMonster();
    monster->scream();
    delete monster;
    
    return 0;
}

