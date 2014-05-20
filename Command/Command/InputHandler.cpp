//
//  InputHandler.cpp
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "InputHandler.h"
#include <iostream>
#include <cctype>

InputHandler::InputHandler(Command* x, Command* y, Command* a, Command* b) : buttonX_(x), buttonY_(y), buttonA_(a), buttonB_(b), curButton(BUTTON_NONE) {
}
InputHandler::~InputHandler() {
    if (buttonX_) delete buttonX_;
    if (buttonY_) delete buttonY_;
    if (buttonA_) delete buttonA_;
    if (buttonB_) delete buttonB_;
}

void InputHandler::getInput() {
    std::cout << "Press any key" << std::endl;
    
    char input;
    std::cin >> input;
    
    switch ( toupper(input) ) {
        case 'X':
            curButton = BUTTON_X;
            break;
        case 'Y':
            curButton = BUTTON_Y;
            break;
        case 'A':
            curButton = BUTTON_A;
            break;
        case 'B':
            curButton = BUTTON_B;
            break;
            
        default:
            curButton = BUTTON_NONE;
            break;
    }
}
Command* InputHandler::handleInput() {
    if (isPressed(BUTTON_X) && buttonX_) return buttonX_;
    else if (isPressed(BUTTON_Y) && buttonY_) return buttonY_;
    else if (isPressed(BUTTON_A) && buttonA_) return buttonA_;
    else if (isPressed(BUTTON_B) && buttonB_) return buttonB_;
    
    return nullptr;
}

bool InputHandler::isPressed(Button btn) {
    if (curButton == btn) {
        return true;
    } else {
        return false;
    }
}