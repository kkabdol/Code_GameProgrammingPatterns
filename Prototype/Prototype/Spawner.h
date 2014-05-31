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

class Spawner
{
public:
    Spawner(Monster* prototype) : prototype_(prototype) {}
    Monster* spawnMonster();
private:
    Monster* prototype_;
};

#endif /* defined(__Prototype__Spawner__) */
