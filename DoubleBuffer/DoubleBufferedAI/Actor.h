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
    static void init() { current_ = 0; }
    static void swap() { current_ = next(); }
    
    Actor(string name) : name_(name) {}
    
    virtual ~Actor() {}
    virtual void update() = 0;
    
    void slap()         { slapped_[next()] = true; }
    bool wasSlapped()   { return slapped_[current_]; }
    string& name()      { return name_; }

private:
    static int current_;
    static int next()   { return 1 - current_; }
    
    bool slapped_[2];
    string name_;
};


int Actor::current_;

#endif /* defined(__DoubleBuffer__Actor__) */
