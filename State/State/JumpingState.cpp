//
//  JumpingState.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "JumpingState.h"
#include "DivingState.h"
#include "StandingState.h"
#include <iostream>


JumpingState::JumpingState(Heroine& heroine) : jumpTime_(0.0f) {
    std::cout << "JumpingState started" << std::endl;
    
    heroine.setGraphics(IMAGE_JUMP);
    heroine.setYVelocity(JUMP_VELOCITY);
}

void JumpingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "JumpingState::handleInput(" << input << ")" << std::endl;
    
    if (input == PRESS_DOWN) {
        heroine.changeState(new DivingState(heroine));
    }
}

void JumpingState::update(Heroine& heroine) {
    std::cout << "JumpingState::update()" << std::endl;
    
    jumpTime_ += 1.0f;
    if (jumpTime_ >= MAX_JUMP) {
        heroine.changeState(new StandingState(heroine));
    }
}
