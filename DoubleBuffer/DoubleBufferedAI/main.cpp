//
//  main.cpp
//  DoubleBufferedAI
//
//  Created by Seonghyeon Choe on 7/7/14.
//  Copyright (c) 2014 kkabdol. All rights reserved.
//

#include <iostream>
#include "Stage.h"
#include "Comedian.h"

int main(int argc, const char * argv[])
{
    Stage stage;
    
    Comedian* harry = new Comedian("Harry");
    Comedian* baldy = new Comedian("Baldy");
    Comedian* chump = new Comedian("Chump");
    
    harry->face(baldy);
    baldy->face(chump);
    chump->face(harry);
    
    stage.add(harry, 0);
    stage.add(baldy, 1);
    stage.add(chump, 2);
    
    harry->slap();
    
    while (1) {
        stage.update();
    }
    
    delete chump;
    delete baldy;
    delete harry;

    return 0;
}

