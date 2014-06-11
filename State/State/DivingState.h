//
//  DivingState.h
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__DivingState__
#define __State__DivingState__

#include "HeroineState.h"

class DivingState : public HeroineState
{
public:
    DivingState(Heroine& heroine);
    virtual void handleInput(Heroine& heroine, Input input);
    virtual void update(Heroine& heroine);
private:
    const float MAX_DIVE = 10.0f;
    float diveTime_;
};

#endif /* defined(__State__DivingState__) */
