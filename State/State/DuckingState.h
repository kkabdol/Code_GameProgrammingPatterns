//
//  DuckingState.h
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__DuckingState__
#define __State__DuckingState__

#include "HeroineState.h"

class DuckingState : public HeroineState
{
public:
    static DuckingState state;
    virtual void onEnter(Heroine& heroine);
    virtual void onExit(Heroine& heroine);
    virtual void handleInput(Heroine& heroine, Input input);
    virtual void update(Heroine& heroine);
private:
    const float MAX_CHARGE = 10.0f;
};

#endif /* defined(__State__DuckingState__) */
