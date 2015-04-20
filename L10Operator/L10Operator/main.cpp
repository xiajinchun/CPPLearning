//
//  main.cpp
//  L10Operator
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
        return this->x;
    }
    
    int getY() {
        return this->y;
    }
    
    void add(Point p) {
        add(p.getX(), p.getY());
    }
    
    void add(int x, int y) {
        this->x += x;
        this->y += y;
    }
    
    //  重载运算符
    void operator += (Point p) {
        add(p);
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    
    // 值对象访问重载运算符
    //    Point p(10, 10);
    //    p.add(Point(12, 12));
    //    p += Point(13, 13);
    
    // 对象访问重载运算符
    Point *p = new Point(10, 10);
    (*p) += Point(2, 2);
    
    
    std::cout << p->getY() << "\n";
    return 0;
}
