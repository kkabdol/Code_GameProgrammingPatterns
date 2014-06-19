//
//  Scene.h
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __DoubleBuffer__Scene__
#define __DoubleBuffer__Scene__

#include "FrameBuffer.h"

class Scene
{
public:
    Scene();
    void draw();
    FrameBuffer& getBuffer();
    
private:
    void swap();
    
    FrameBuffer* current_;
    FrameBuffer* next_;
    FrameBuffer buffer_[2];
};

#endif /* defined(__DoubleBuffer__Scene__) */
