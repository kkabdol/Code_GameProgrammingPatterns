//
//  Spawner.h
//  Prototype
//
//  Created by Seonghyeon Choe on 5/31/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Prototype__Spawner__
#define __Prototype__Spawner__

#include "Monster.h"

typedef Monster* (*SpawnCallback)();

class Spawner
{
public:
    Spawner(SpawnCallback spawn) : spawn_(spawn) {}
    Monster* spawnMonster();
private:
    SpawnCallback spawn_;
};

#endif /* defined(__Prototype__Spawner__) */
