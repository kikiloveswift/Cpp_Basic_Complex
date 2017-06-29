//
//  InheritOBJ.hpp
//  Cpp_Basic_Complex
//
//  Created by kong on 2017/6/26.
//  Copyright © 2017年 konglee. All rights reserved.
//

#ifndef InheritOBJ_hpp
#define InheritOBJ_hpp

#include <stdio.h>

class Father {
private:
    int age;
    int salary;
public:
    Father(int age, int salary);
    ~Father();
    void printT();
};

class Son : public Father {
private:
    int s_grade;
    
public:
    Son(int age, int salary, int s_grade) : Father(age, salary)
    {
        std::cout << "子类构造" << std::endl;
         this -> s_grade = s_grade;
    }
    
    ~Son()
    {
        std::cout << "子类析构" << std::endl;
    }
};

#endif /* InheritOBJ_hpp */
