//
//  main.cpp
//  L13Ref
//
//  Created by Jinchun Xia on 15/4/20.
//  Copyright (c) 2015年 TEAM. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x, y;
    
public:
    Point(int x, int y) {
        this->x = x;
        this->y = y;
    }
    
    int getX() {
        return x;
    }
    
    int getY() {
        return y;
    }
    
//    C++引用，不需要进行内存拷贝
    void add(Point &p) {
        this->x += p.x;
        this->y += p.y;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Point p(1, 1);
    Point p1(2, 3);
    p.add(p1);
    
    std::cout << p.getX();
    
    return 0;
}
