//
//  main.cpp
//  L11PseudoFunction
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>

void hello() {
    printf("hello\n");
}

class Hello {
    
public:
    //    伪函数
    void operator()() {
        printf("Hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //    hello();
    
    Hello h;
    h();
    
    std::cout << "Hello, World!\n";
    return 0;
}
