//
//  JumpingState.h
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__JumpingState__
#define __State__JumpingState__

#include "HeroineState.h"

class JumpingState : public HeroineState
{
public:
    static JumpingState state;
    virtual void onEnter(Heroine& heroine);
    virtual void onExit(Heroine& heroine);
    virtual void handleInput(Heroine& heroine, Input input);
    virtual void update(Heroine& heroine);
private:
    const float JUMP_VELOCITY = 10.0f;
    const float MAX_JUMP = 10.0f;
};


#endif /* defined(__State__JumpingState__) */
