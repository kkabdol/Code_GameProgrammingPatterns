//
//  FireCommand.cpp
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "FireCommand.h"
#include <iostream>

void FireCommand::execute(GameActor& actor) {
    actor.fire();
}