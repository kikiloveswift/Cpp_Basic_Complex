//
//  TemplateTest.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/30.
//  Copyright © 2017年 konglee. All rights reserved.
//  模板类测试

#ifndef TemplateTest_hpp
#define TemplateTest_hpp

#include <stdio.h>

template <typename T>
T getMax(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
#endif /* TemplateTest_hpp */
