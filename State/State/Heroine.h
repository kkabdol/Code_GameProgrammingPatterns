//
//  Heroine.h
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __State__Heroine__
#define __State__Heroine__

#include "Input.h"

class HeroineState;

#warning should I declare these enum outside of the class?
enum State
{
    STATE_STANDING,
    STATE_JUMPING,
    STATE_DUCKING,
    STATE_DIVING,
};

enum Image
{
    IMAGE_STAND,
    IMAGE_JUMP,
    IMAGE_DUCK,
    IMAGE_DIVE,
};

class Heroine
{
public:
    Heroine();
    virtual void handleInput(Input input);
    virtual void update();
    void changeState(HeroineState* state);
    void setGraphics(Image image);
    void superBomb();
    void setYVelocity(float v);
    
    float diveTime_;
    float jumpTime_;
    float chargeTime_;
private:
    
    
    Image image_;
    HeroineState* state_;
    float yVelocity_;
};

#endif /* defined(__State__Heroine__) */
