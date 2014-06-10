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

#warning should I declare these enum outside of the class?
enum State
{
    STATE_STANDING,
    STATE_JUMPING,
    STATE_DUCKING,
    STATE_DIVING
};

enum Image
{
    IMAGE_DUCK,
    IMAGE_JUMP,
    IMAGE_DIVE,
    IMAGE_STAND
};

class Heroine
{
public:
    Heroine() : image_(IMAGE_STAND), state_(STATE_STANDING), yVelocity_(0) {}
    void handleInput(Input input);
    
private:
    void setGraphics(Image image);
    
    const float JUMP_VELOCITY = 10.0f;
    
    Image image_;
    State state_;
    float yVelocity_;
};

#endif /* defined(__State__Heroine__) */
