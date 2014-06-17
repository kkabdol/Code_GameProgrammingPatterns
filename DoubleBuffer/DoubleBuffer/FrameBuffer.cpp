//
//  FrameBuffer.cpp
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "FrameBuffer.h"

FrameBuffer::FrameBuffer() {
    clear();
}

void FrameBuffer::clear() {
    for (int i = 0; i < WIDTH * HEIGHT; ++i) {
        pixels_[i] = WHITE;
    }
}

void FrameBuffer::draw(int x, int y) {
    if (x < 0 || x >= WIDTH ||
        y < 0 || y >= HEIGHT) {
        return;
    }
    
    pixels_[(WIDTH*y) + x] = BLACK;
}

const char* FrameBuffer::getPixels() {
    return pixels_;
}

char FrameBuffer::getPixel(int x, int y) {
    return pixels_[(WIDTH*y) + x];
}