//
//  FrameBuffer.h
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __DoubleBuffer__FrameBuffer__
#define __DoubleBuffer__FrameBuffer__

class FrameBuffer
{
public:
    FrameBuffer();
    void clear();
    void draw(int x, int y);
    const char* getPixels();
    char getPixel(int x, int y);
    
    static const int WIDTH = 5;
    static const int HEIGHT = 5;
    
private:
    static const char BLACK = '@';
    static const char WHITE = ' ';
    
    char pixels_[WIDTH * HEIGHT];
};

#endif /* defined(__DoubleBuffer__FrameBuffer__) */
