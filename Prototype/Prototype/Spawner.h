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
    virtual ~Spawner() {}
    virtual Monster* spawnMonster() = 0;
};

template <class T>
class SpawnerFor : public Spawner
{
public:
    virtual Monster* spawnMonster() { return new T(); }
};

#endif /* defined(__Prototype__Spawner__) */
