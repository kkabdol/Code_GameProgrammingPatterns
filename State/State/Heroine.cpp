//
//  Heroine.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Heroine.h"
#include "HeroineState.h"
#include "StandingState.h"
#include <iostream>

Heroine::Heroine() : image_(IMAGE_STAND), state_(nullptr), yVelocity_(0.0f), diveTime_(0.0f), jumpTime_(0.0f), chargeTime_(0.0f) {
    state_ = &StandingState::state;
}

void Heroine::handleInput(Input input) {
    if (state_ != nullptr) {
        state_->handleInput(*this, input);
    }
}

void Heroine::update() {
    if (state_ != nullptr) {
        state_->update(*this);
    }
}

void Heroine::changeState(HeroineState* state) {
    if (state_ != nullptr) {
        state_->onExit(*this);
    }
    
    state_ = state;
    
    if (state_ != nullptr) {
        state_->onEnter(*this);
    }
}
void Heroine::setGraphics(Image image) {
    std::cout << "Heroine setGraphics(" << image << ")" << std::endl;
    
    image_ = image;
}

void Heroine::superBomb() {
    std::cout << "Heroine superBomb()" << std::endl;
}

void Heroine::setYVelocity(float v) {
    std::cout << "Heroine setYVelocity(" << v << ")" << std::endl;
    
    yVelocity_ = v;
}