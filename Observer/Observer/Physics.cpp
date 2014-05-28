//
//  Physics.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Physics.h"

void Physics::updateEntity(Entity& entity) {
    notify(entity, EVENT_ENTITY_ON_BRIDGE);
    notify(entity, EVENT_ENTITY_FELL);
}