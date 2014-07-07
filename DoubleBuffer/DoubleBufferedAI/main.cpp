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
    
    Comedian* harry = new Comedian("harry");
    Comedian* baldy = new Comedian("baldy");
    Comedian* chump = new Comedian("chump");
    
    harry->face(baldy);
    baldy->face(chump);
    chump->face(harry);
    
    delete chump;
    delete baldy;
    delete harry;

    return 0;
}

