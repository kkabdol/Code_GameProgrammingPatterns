//
//  Subject.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef Observer_Subject_h
#define Observer_Subject_h

#include "Observer.h"
#include "Entity.h"
#include "Event.h"

const int MAX_OBSERVERS = 10;

class Subject
{
public:
    Subject() : head_(nullptr){}
    
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    
protected:
    void notify(const Entity& entity, Event event);
    
private:
    
    Observer* head_;
};

#endif /* defined(__Observer__Subject__) */
