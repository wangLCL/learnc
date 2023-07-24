#pragma once
#include<iostream>
#include<string>
using namespace std;
class People
{
public:
	static int num;
	string name;
	int age;
public:
	People();
	People(int age);
	~People();
	People(const People& people);
	void show();
	void setName(string name);
	string getName();
	void setAge(int age);
	int getAge();
	static void printData();

	void peopleInfo() const;
};

