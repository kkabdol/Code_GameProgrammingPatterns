//
//  StandingState.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/11/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "StandingState.h"
#include "JumpingState.h"
#include "DuckingState.h"
#include <iostream>

StandingState StandingState::state;

void StandingState::onEnter(Heroine& heroine) {
    std::cout << "StandingState onEnter()" << std::endl;
    
    heroine.setGraphics(IMAGE_STAND);
}
void StandingState::onExit(Heroine& heroine) {
    std::cout << "StandingState onExit()" << std::endl;
}

void StandingState::handleInput(Heroine& heroine, Input input) {
    std::cout << "StandingState::handleInput(" << input << ")" << std::endl;
    
    if (input == PRESS_B) {
        heroine.changeState(&JumpingState::state);
    } else if (input == PRESS_DOWN) {
        heroine.changeState(&DuckingState::state);
    }

}

void StandingState::update(Heroine& heroine) {
    std::cout << "StandingState::update()" << std::endl;
}
