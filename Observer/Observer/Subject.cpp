//
//  Subject.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Subject.h"
#include "Observer.h"
#include <algorithm>

void Subject::addObserver(Observer* observer) {
    if (std::find(observers_.begin(), observers_.end(), observer) != observers_.end()) {
        return;
    }
    
    observers_.push_back(observer);
    observer->addSubject(this);
}

void Subject::removeObserver(Observer* observer) {
    observers_.remove(observer);
}

void Subject::notify(const Entity& entity, Event event) {
    for (std::list<Observer*>::iterator it = observers_.begin(); it != observers_.end(); ++it) {
        (*it)->onNotify(entity, event);
    }
}
