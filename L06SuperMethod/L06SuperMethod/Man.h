//
//  Man.h
//  L03Classes
//
//  Created by Jinchun Xia on 15/4/19.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#ifndef __L03Classes__Man__
#define __L03Classes__Man__

#include <stdio.h>
#include "People.h"

class Man:public People {
    
public:
    Man(int age);
    void sayHello();
};

#endif /* defined(__L03Classes__Man__) */
