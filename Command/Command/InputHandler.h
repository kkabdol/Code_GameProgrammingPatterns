//
//  InputHandler.h
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Command__InputHandler__
#define __Command__InputHandler__

#include "Command.h"

class InputHandler
{
public:
    InputHandler(Command* x, Command* y, Command* a, Command* b);
    ~InputHandler();
    
    void getInput();
    Command* handleInput();
private:
    
    typedef enum {
        BUTTON_X,
        BUTTON_Y,
        BUTTON_A,
        BUTTON_B,
        
        BUTTON_NONE,
    } Button;
    bool isPressed(Button btn);
    Button curButton;
    
    Command* buttonX_;
    Command* buttonY_;
    Command* buttonA_;
    Command* buttonB_;
};

#endif /* defined(__Command__InputHandler__) */
