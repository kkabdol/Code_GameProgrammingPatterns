//
//  main.cpp
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "InputHandler.h"
#include "JumpCommand.h"
#include "FireCommand.h"

int main(int argc, const char * argv[])
{
    InputHandler inputHandler(new FireCommand, new JumpCommand, nullptr, nullptr);
    GameActor helloActor("HelloJump", "HelloFire");
    GameActor byeActor("ByeJump", "ByeFire");

    
    GameActor* curActor = &helloActor;
    while (1) {
        inputHandler.getInput();
        Command* command = inputHandler.handleInput();
        if (command) {
            command->execute(*curActor);
        }
        
        curActor = (curActor == &helloActor) ? &byeActor : &helloActor;
        std::cout << "Actor changed" << std::endl << std::endl;
    }
    
    return 0;
}

