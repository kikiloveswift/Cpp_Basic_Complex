//
//  main.cpp
//  Cpp_Basic_Complex
//
//  Created by kong on 17/6/22.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include <iostream>
#include "ComplexTest1.hpp"
#include <thread>
using namespace std;

//全局重载"-"运算符
Complex operator-(Complex &c1,Complex &c2)
{
    Complex tmp(c1.a - c2.a,c1.b - c2.b);
    return tmp;
}

Complex& operator*(Complex &c1, Complex &c2)
{
    Complex *tmp = new Complex();
    tmp->a = c1.a * c2.a;
    tmp->b = c1.b * c2.b;
    
//    Complex tmp(c1.a * c2.a, c1.b * c2.b);
    return *tmp;
}

void test1()
{
    Complex c1(1,10);
    Complex c2(2, 3);
    
    //c1调用了Complex的成员函数方法
    //    Complex c3 = c1 + c2;
    Complex c3 = c1.operator+(c2);
    c3.printResult();
    Complex c4 = c1 - c2;
    c4.printResult();
    
    Complex c5 = c1 * c2;
    c5.printResult();
}

int main(int argc, const char * argv[])
{
    thread t(test1);
    t.join();
    
    return 0;
}
