//
// Created by 28188 on 2023/7/6.
//

#include <iostream>
#include <string>
#ifndef SELFSTART_PEOPLE_H
#define SELFSTART_PEOPLE_H
using namespace std;

class People {
protected:
    string name;
    int age;
public:
    void setName(string name);
    void setAge(int age);
    string getName();
    int getAge();
    void toString();
};

#endif //SELFSTART_PEOPLE_H
