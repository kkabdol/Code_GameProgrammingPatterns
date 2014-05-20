//
//  FireCommand.h
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Command__FireCommand__
#define __Command__FireCommand__

#include "Command.h"

class FireCommand : public Command
{
public:
    virtual void execute(GameActor& actor);
};

#endif /* defined(__Command__FireCommand__) */
