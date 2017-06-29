//
//  InheritOBJ.cpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/26.
//  Copyright © 2017年 konglee. All rights reserved.
//
#include <iostream>
#include "InheritOBJ.hpp"
using namespace std;
static  int  i = 0;

Father::Father(int age, int salary)
{
     cout << " 父类构造函数" << (++i) << endl;
    this -> age = age;
    this -> salary = salary;
}
Father::~Father()
{
    cout << " dead 父类析构函数" << (++i) << endl;
}

void Father::printT()
{
    cout << "age = " << age << "salary  =  " << salary << endl;
    
}

