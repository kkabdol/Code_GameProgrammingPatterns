//
//  Physics.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Observer__Physics__
#define __Observer__Physics__

#include "Subject.h"

class Physics : public Subject
{
public:
    void updateEntity(Entity& entity);
};

#endif /* defined(__Observer__Physics__) */
