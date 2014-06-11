//
//  main.cpp
//  State
//
//  Created by Seonghyeon Choe on 6/10/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "Heroine.h"

int main(int argc, const char * argv[])
{
    Heroine heroine;
    
    // jump
    heroine.handleInput(PRESS_B);
    for (int i = 0; i < 10; ++i) {
        heroine.update();
    }
    
    // jump and dive
    heroine.handleInput(PRESS_B);
    for (int i = 0; i < 5; ++i) {
        heroine.update();
    }
    heroine.handleInput(PRESS_DOWN);
    heroine.handleInput(RELEASE_DOWN);
    for (int i = 0; i < 10; ++i) {
        heroine.update();
    }
    
    // duck
    heroine.handleInput(PRESS_DOWN);
    heroine.handleInput(RELEASE_DOWN);
    for (int i = 0; i < 10; ++i) {
        heroine.update();
    }

    // duck and release
    heroine.handleInput(PRESS_DOWN);
    for (int i = 0; i < 5; ++i) {
        heroine.update();
    }
    heroine.handleInput(RELEASE_DOWN);
    return 0;
}

