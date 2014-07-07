//
//  Actor.h
//  DoubleBuffer
//
//  Created by Seonghyeon Choe on 7/7/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef __DoubleBuffer__Actor__
#define __DoubleBuffer__Actor__

#include <string>
using namespace std;

class Actor
{
public:
    Actor(string name) : name_(name), slapped_(false) {}

    virtual ~Actor() {}
    virtual void update() = 0;
    
    void reset()        { slapped_ = false; }
    void slap()         { slapped_ = true; }
    bool wasSlapped()   { return slapped_; }
    string& name()      { return name_; }

private:
    bool slapped_;
    string name_;
};

#endif /* defined(__DoubleBuffer__Actor__) */
