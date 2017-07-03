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
#include "InheritOBJ.hpp"
#include "MutableInherit.hpp"
#include "ReferenceTest.hpp"

#include "SizeClassTest.hpp"
#include "TemplateTest.hpp"
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

//继承
void test2()
{
//    Father f1(23, 3);
//    f1.printT();
    Son s1(23,3,5);
    s1.printT();
}

//多继承
void test3()
{
    C c1(5);
    cout << c1.a << c1.b << c1.c << endl;
}

//引用
void test4()
{
    struct TTeacher t1 = {"name",20};
    r_test1(t1);//20
    cout << t1.age << "岁" << endl;
    r_test2(t1);//22
    cout << t1.age << "岁" << endl;
    r_test3(&t1);//23
    cout << t1.age << "岁" << endl;
    
    int a = 10; //编译器给 a 开辟 0x7fff5fbff5f4 这段内存空间
    printf("%p\n",&a);
    int &b = a; //编译器没有给b开辟空间，此时b就是a的替身
    printf("%p\n",&b);
    b = 20;
    printf("a = %p, b = %p\n",&a,&b);
    cout << " a = " << a << " b = " << b << endl; // a = 20 b = 20
    /* 内存分配呢？
     a 和 b 共用一块内存
     */
    
}

void test5()
{
    calEachSize();
}

void test6()
{
    int max = getMax(3, 2); //隐式调用
    cout << "max is " << max << endl;
    
    float max_f = getMax<float>(3.2, 2.99); //显示调用
    cout << "max_f is " << max_f << endl;
    
}

int main(int argc, const char * argv[])
{
//    thread t(test1);
//    t.join();
    test6();
    return 0;
}
