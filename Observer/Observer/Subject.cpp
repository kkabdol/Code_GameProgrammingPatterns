//
//  Subject.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Subject.h"

void Subject::addObserver(Observer* observer) {
    observer->next_ = head_;
    head_ = observer;
}

void Subject::removeObserver(Observer* observer) {
    if (head_ == nullptr) {
        head_ = observer;
        return;
    }
    
    Observer* cur;
    while (cur != nullptr) {
        if (cur->next_ == nullptr) {
            cur->next_ = observer;
            observer->next_ = nullptr;
            return;
        }
        
        cur = cur->next_;
    }
}

void Subject::notify(const Entity& entity, Event event) {
    Observer* cur = head_;
    while (cur != nullptr) {
        cur->onNotify(entity, event);
        cur = cur->next_;
    }
}
