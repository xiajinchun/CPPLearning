//
//  main.cpp
//  L07Functions
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    // insert code here...

    People *p = new Man(20);
    p->sayHello();
    p->eat();
    
    return 0;
}
