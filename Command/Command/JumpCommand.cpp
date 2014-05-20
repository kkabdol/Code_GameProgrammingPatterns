//
//  JumpCommand.cpp
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "JumpCommand.h"
#include <iostream>

void JumpCommand::execute(GameActor& actor) {
    actor.jump();
}