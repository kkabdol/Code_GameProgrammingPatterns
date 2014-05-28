//
//  Observer.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef Observer_Observer_h
#define Observer_Observer_h

#include "Entity.h"
#include "Event.h"

class Observer
{
    friend class Subject;
    
public:
    Observer() : next_(nullptr) {};
    virtual ~Observer() {};
    
    virtual void onNotify(const Entity& entity, Event event) = 0;
    
private:
    Observer* next_;
};


#endif
