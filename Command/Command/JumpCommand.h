//
//  JumpCommand.h
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Command__JumpCommand__
#define __Command__JumpCommand__

#include "Command.h"

class JumpCommand : public Command
{
public:
    virtual void execute(GameActor& actor);
};

#endif /* defined(__Command__JumpCommand__) */
