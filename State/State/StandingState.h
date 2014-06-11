//
//  StandingState.h
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__StandingState__
#define __State__StandingState__

#include "HeroineState.h"

class StandingState : public HeroineState
{
public:
    StandingState(Heroine& heroine);
    virtual void handleInput(Heroine& heroine, Input input);
    virtual void update(Heroine& heroine);
    
};

#endif /* defined(__State__StandingState__) */
