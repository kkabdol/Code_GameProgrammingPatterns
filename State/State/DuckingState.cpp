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

DuckingState::DuckingState(Heroine& heroine) : chargeTime_(0.0f) {
    std::cout << "DuckingState started" << std::endl;
    
    heroine.setGraphics(IMAGE_DUCK);
}

void DuckingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "DuckingState::handleInput(" << input << ")" << std::endl;
    
    if (input == RELEASE_DOWN) {
        heroine.changeState(new StandingState(heroine));
    }
}

void DuckingState::update(Heroine& heroine) {
    chargeTime_ += 1.0f;
    std::cout << "DuckingState::update()" << std::endl;
    
    if (chargeTime_ >= MAX_CHARGE) {
        heroine.superBomb();
        heroine.changeState(new StandingState(heroine));
    }
}
