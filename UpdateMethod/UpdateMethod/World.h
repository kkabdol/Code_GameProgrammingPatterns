//
//  World.h
//  UpdateMethod
//
//  Created by Seonghyeon Choe on 7/12/14.
//  Copyright (c) 2014 shuan. All rights reserved.
//

#ifndef __UpdateMethod__World__
#define __UpdateMethod__World__

#include "Entity.h"

static const int MAX_ENTITIES = 1024;

class World
{
public:
    World() : numEntities_(0) {}
    
    void gameLoop();
    
    void addEntity(Entity* entity)
    {
        entities_[numEntities_] = entity;
        ++numEntities_;
    }
    
    bool removeEntity(Entity* entity)
    {
        for (int i = 0; i < numEntities_; ++i) {
            if (entities_[i] == entity) {
                
                for (int j = i; j < numEntities_-1; ++j) {
                    entities_[j] = entities_[j+1];
                }
                
                --numEntities_;
                return true;
            }
        }
        
        return false;
    }
    
private:
    Entity* entities_[MAX_ENTITIES];
    int numEntities_;
};

#endif /* defined(__UpdateMethod__World__) */
