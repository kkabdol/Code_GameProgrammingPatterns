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
    static DivingState state;
    virtual void onEnter(Heroine& heroine);
    virtual void onExit(Heroine& heroine);
    virtual void handleInput(Heroine& heroine, Input input);
    virtual void update(Heroine& heroine);
private:
    const float MAX_DIVE = 10.0f;
};

#endif /* defined(__State__DivingState__) */
