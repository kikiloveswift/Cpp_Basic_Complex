//
//  MutableInherit.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/26.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef MutableInherit_hpp
#define MutableInherit_hpp

#include <stdio.h>

class A {
public:
    int a;
    
public:
    A(int a)
    {
        this -> a = a;
    }
    ~A()
    {
        
    }
};

class B {
public:
    int b;
    
public:
    B(int b)
    {
        this -> b = b;
    }
    ~B()
    {
        
    }
};

class C : public A, public B
{
public:
    int c;
    
public:
    C(int c) : A(1), B(3)
    {
        this -> c = c;
    }
    ~C()
    {
        
    }
};

#endif /* MutableInherit_hpp */
