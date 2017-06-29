//
//  SizeClassTest.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/28.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef SizeClassTest_hpp
#define SizeClassTest_hpp

#include <stdio.h>

struct A1
{
    int a;
    int b;
    char name[5];
};

class A2
{
public:
    int a;
    int b;
    static int c;
    void printT();
};

class A3
{
    
public:
    int a;
    int b;
    static int c;
};

void calEachSize();

#endif /* SizeClassTest_hpp */
