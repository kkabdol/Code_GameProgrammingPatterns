//
//  main.cpp
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 6/17/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "Scene.h"
#include "Display.h"

int main(int argc, const char * argv[])
{
    Scene scene;
    scene.draw();
    
    Display::draw(scene.getBuffer());
    
    return 0;
}

