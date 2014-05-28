//
//  Subject.cpp
//  Observer
//
//  Created by Seonghyeon Choe on 5/28/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include "Subject.h"

void Subject::addObserver(Observer* observer) {
    if (numObservers_ < MAX_OBSERVERS) {
        observers_[numObservers_] = observer;
        ++numObservers_;
    }
}

void Subject::removeObserver(Observer* observer) {
    for (int i = 0; i < numObservers_; ++i) {
        if (observers_[i] == observer) {
            for (int j = i+1; j < numObservers_; ++j) {
                observers_[j-1] = observers_[j];
            }
            --numObservers_;
            return;
        }
    }
}

void Subject::notify(const Entity& entity, Event event) {
    for (int i = 0; i < numObservers_; ++i) {
        observers_[i]->onNotify(entity, event);
    }
}
