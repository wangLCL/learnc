//
// Created by 28188 on 2023/7/6.
//

#include "People.h"

int People::getAge() {
    return age;
}

void People::setAge(int age) {
    this->age = age;
}

void People::setName(string name) {
    this->name = name;
}

string People::getName() {
    return name;
}

void People::toString() {
    cout << "name:"<<name << "age"<<age<<endl;
}