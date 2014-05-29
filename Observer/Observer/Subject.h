//
//  Subject.h
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#ifndef Observer_Subject_h
#define Observer_Subject_h

#include <List>
#include "Entity.h"
#include "Event.h"

class Observer;

class Subject
{
public:
    void addObserver(Observer* observer);
    void removeObserver(Observer* observer);
    
protected:
    void notify(const Entity& entity, Event event);
    
private:
    std::list<Observer*> observers_;
};

#endif /* defined(__Observer__Subject__) */
