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
    Actor(string name) : name_(name), currentSlapped_(false) {}

    virtual ~Actor() {}
    virtual void update() = 0;
    
    void swap()
    {
        // Swap the buffer.
        currentSlapped_ = nextSlapped_;
        
        // Clear the new "next" buffer.
        nextSlapped_ = false;
    }
    
    void slap()         { nextSlapped_ = true; }
    bool wasSlapped()   { return currentSlapped_; }
    string& name()      { return name_; }

private:
    bool currentSlapped_;
    bool nextSlapped_;
    string name_;
};

#endif /* defined(__DoubleBuffer__Actor__) */
