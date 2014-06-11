//
//  DivingState.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "DivingState.h"
#include "StandingState.h"
#include <iostream>

DivingState::DivingState(Heroine& heroine) : diveTime_(0.0f) {
    std::cout << "DivingState started" << std::endl;

    heroine.setGraphics(IMAGE_DIVE);
}

void DivingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "DivingState::handleInput(" << input << ")" << std::endl;
}

void DivingState::update(Heroine& heroine) {
    std::cout << "DivingState::update()" << std::endl;
    
    diveTime_ += 1.0f;
    if (diveTime_ >= MAX_DIVE) {
        heroine.changeState(new StandingState(heroine));
    }
}