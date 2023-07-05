// LeiDemo01.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
//但是如果有默认参数的，People p 就会导致不明确
#include <iostream>
using namespace std;
class People {

private:
    string name;
    int age;

public:
    People():name("wang"),age(1) {
        this->name = "";
        this->age = 0;
    }
    void setName(string name) {
        this->name = name;
    }

    void setAge(int age) {
        this->age = age;
    }

    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }

    void printInfo() {
        cout << "name :" << name << "age:" << age;
    }
};

int main()
{
    People* p = new People();
    p->printInfo();

    People p1;
    p1.printInfo();
    std::cout << "Hello World!\n";
}
