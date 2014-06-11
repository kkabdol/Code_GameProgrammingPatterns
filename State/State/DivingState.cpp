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

DivingState DivingState::state;

void DivingState::onEnter(Heroine& heroine) {
    std::cout << "DivingState onEnter()" << std::endl;
    
    heroine.diveTime_ = 0.0f;
    heroine.setGraphics(IMAGE_DIVE);
}
void DivingState::onExit(Heroine& heroine) {
    std::cout << "DivingState onExit()" << std::endl;
}

void DivingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "DivingState::handleInput(" << input << ")" << std::endl;
}

void DivingState::update(Heroine& heroine) {
    std::cout << "DivingState::update()" << std::endl;
    
    heroine.diveTime_ += 1.0f;
    if (heroine.diveTime_ >= MAX_DIVE) {
        heroine.changeState(&StandingState::state);
    }
}