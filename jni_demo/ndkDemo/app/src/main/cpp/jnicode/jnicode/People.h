#pragma once
#include<iostream>
using namespace std;
class People {
protected:
	string name;
	int age;
public:
	People();
	People(string name,int age);
	void printlnfo();
	string getName();
	void setName(string name);
	int getAge();
	void setName(int age);
};