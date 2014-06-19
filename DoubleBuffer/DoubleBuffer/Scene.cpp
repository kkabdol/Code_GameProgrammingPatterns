//
//  Scene.cpp
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Scene.h"
Scene::Scene() : current_(&buffer_[0]), next_(&buffer_[1]) {
}

void Scene::draw() {
    next_->clear();
    
    next_->draw(1, 1);
    next_->draw(4, 1);
    next_->draw(1, 3);
    next_->draw(2, 4);
    next_->draw(3, 4);
    next_->draw(4, 3);
    
    swap();
}

FrameBuffer& Scene::getBuffer() {
    return *current_;
}

void Scene::swap() {
    FrameBuffer* temp = current_;
    current_ = next_;
    next_ = temp;
}