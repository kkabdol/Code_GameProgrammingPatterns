//
//  Hero.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Observer__Hero__
#define __Observer__Hero__

#include "Entity.h"

class Hero : public Entity
{
public:
    virtual bool isHero() const;
};



#endif /* defined(__Observer__Hero__) */
