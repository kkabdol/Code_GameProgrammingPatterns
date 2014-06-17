//
//  Scene.cpp
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Scene.h"

void Scene::draw() {
    buffer_.clear();
    
    buffer_.draw(1, 1);
    buffer_.draw(4, 1);
    buffer_.draw(1, 3);
    buffer_.draw(2, 4);
    buffer_.draw(3, 4);
    buffer_.draw(4, 3);
}

FrameBuffer& Scene::getBuffer() {
    return buffer_;
}
