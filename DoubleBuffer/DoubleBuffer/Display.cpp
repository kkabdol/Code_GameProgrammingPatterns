//
//  Display.cpp
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Display.h"
#include <iostream>

void Display::draw(FrameBuffer& fb) {
    for (int y = 0; y < FrameBuffer::HEIGHT; ++y) {
        for (int x = 0; x < FrameBuffer::WIDTH; ++x) {
            std::cout << fb.getPixel(x, y) << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}