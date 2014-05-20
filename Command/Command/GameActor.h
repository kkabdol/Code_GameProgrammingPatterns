//
//  GameActor.h
//  Command
//
//  Created by Seonghyeon Choe on 5/20/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __Command__GameActor__
#define __Command__GameActor__

#include <string>

class GameActor {
public:
    GameActor(std::string jump, std::string fire);
    void jump() const;
    void fire() const;
private:
    std::string jumpStr;
    std::string fireStr;
};

#endif /* defined(__Command__GameActor__) */
