//
//  Observer.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/29/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Observer.h"
#include "Subject.h"

Observer::~Observer() {
    for (std::list<Subject*>::iterator it = subjects_.begin(); it != subjects_.end(); ++it) {
        (*it)->removeObserver(this);
    }
}

void Observer::addSubject(Subject* subject) {
    if (std::find(subjects_.begin(), subjects_.end(), subject) != subjects_.end()) {
        return;
    }
    
    subjects_.push_back(subject);
}