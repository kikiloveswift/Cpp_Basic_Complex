//
//  ComplexTest1.cpp
//  Cpp_Basic_Complex
//
//  Created by kong on 17/6/22.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "ComplexTest1.hpp"
#include <iostream>

Complex::Complex(int a, int b)
{
    this -> a = a;
    this -> b = b;
}

 Complex::~Complex()
{
    std::cout << "dead" << std::endl;
}


void Complex::printResult()
{
    std::cout << "a = "<< this -> a << "b = " << this -> b << std::endl;
}
