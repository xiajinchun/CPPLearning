//
//  main.cpp
//  L02NS
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>
#include "People.h"

using namespace::xiajinchun;

int main(int argc, const char * argv[]) {
    // insert code here...

    People *p = new People();
    p->sayHello();
    
    delete p;
    return 0;
}
