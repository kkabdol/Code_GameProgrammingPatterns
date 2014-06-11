//
//  HeroineState.h
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__HeroineState__
#define __State__HeroineState__

#include "Heroine.h"
#include "Input.h"

class HeroineState
{
public:
    virtual ~HeroineState() {}
    virtual void handleInput(Heroine& heroine, Input input) {}
    virtual void update(Heroine& heroine) {}
};

#endif /* defined(__State__HeroineState__) */
