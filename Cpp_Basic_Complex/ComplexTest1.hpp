//
//  ComplexTest1.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 17/6/22.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef ComplexTest1_hpp
#define ComplexTest1_hpp

#include <stdio.h>

class Complex {
private:
    int a;
    int b;
    friend Complex operator-(Complex &c1,Complex &c2);
    friend Complex& operator*(Complex &c1, Complex &c2);
public:
    Complex(int a = 0, int b = 0);
    ~Complex();
    void printResult();
    Complex operator+(Complex &c2)
    {
        Complex tmp(this -> a + c2.a, this -> b + c2.b);
        return tmp;
    }
};

#endif /* ComplexTest1_hpp */
