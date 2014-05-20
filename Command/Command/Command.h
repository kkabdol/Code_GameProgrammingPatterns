//
//  Command.h
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef Command_Command_h
#define Command_Command_h

#include "GameActor.h"

class Command
{
public:
    virtual ~Command() {}
    virtual void execute(GameActor& actor) = 0;
};

#endif
