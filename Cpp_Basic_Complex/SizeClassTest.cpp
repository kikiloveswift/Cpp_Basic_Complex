//
//  SizeClassTest.cpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/28.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "SizeClassTest.hpp"
#include <iostream>
using namespace std;

void calEachSize()
{
    struct A1 s1 = A1{1,2,"kong"};
    char n[5];
    cout << "char length is " << sizeof(n) << endl;
    cout << "Struct A1 length is " << sizeof(A1) << endl;
    printf("each item address is %p,%p,%p",&s1.a,&s1.b,&s1.name);
    cout << "Class A2 length is " << sizeof(A2) << endl;
    cout << "Class A3 length is " << sizeof(A3) << endl;
}
