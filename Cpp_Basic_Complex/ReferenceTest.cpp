//
//  ReferenceTest.cpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/27.
//  Copyright © 2017年 konglee. All rights reserved.
//

#include "ReferenceTest.hpp"
void r_test1(TTeacher t)
{
    t.age = 21;
}

void r_test2(TTeacher &t)
{
    t.age = 22;
}

void r_test3(TTeacher *t)
{
    t -> age = 23;
}
