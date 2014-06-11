//
//  DuckingState.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "DuckingState.h"
#include "StandingState.h"
#include <iostream>

DuckingState DuckingState::state;

void DuckingState::onEnter(Heroine& heroine) {
    std::cout << "DuckingState onEnter()" << std::endl;
    
    heroine.chargeTime_ = 0.0f;
    heroine.setGraphics(IMAGE_DUCK);
}
void DuckingState::onExit(Heroine& heroine) {
    std::cout << "DuckingState onExit()" << std::endl;
}

void DuckingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "DuckingState::handleInput(" << input << ")" << std::endl;
    
    if (input == RELEASE_DOWN) {
        heroine.changeState(&StandingState::state);
    }
}

void DuckingState::update(Heroine& heroine) {
    heroine.chargeTime_ += 1.0f;
    std::cout << "DuckingState::update()" << std::endl;
    
    if (heroine.chargeTime_ >= MAX_CHARGE) {
        heroine.superBomb();
        heroine.changeState(&StandingState::state);
    }
}
