//
//  ReferenceTest.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/27.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef ReferenceTest_hpp
#define ReferenceTest_hpp

#include <stdio.h>
struct TTeacher
{
    char name[10];
    int age;
};

void r_test1(TTeacher t);

void r_test2(TTeacher &t);

void r_test3(TTeacher *t);

#endif /* ReferenceTest_hpp */
