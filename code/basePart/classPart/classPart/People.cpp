#include "People.h"
#include"Friend.h"

People::People() {
	cout << "构造函数" << endl;
}

People::~People() {
	cout << "析构函数" << endl;
}

People::People(const People& people) {
	cout << "拷贝构造函数" << endl;
	age = people.age;
	name = people.name;
}

//People::People(int age) {
//	setAge(age);
//}
People::People(int age):age(age) {
	
}

void People::setAge(int age) {
	this->age = age;
}

void People::setName(string name) {
	this->name = name;
}

int People::getAge() {
	return age;
}

string People::getName() {
	return name;
}

void People::show() {
	Friend* f = new Friend();
	f->money = 100;
	age = 19;
	cout << getAge() <<"     " << getName()<<endl;
}

void People::printData() {
	cout << "xxx" << endl;
}

void People::peopleInfo() const{
	cout << "xxxxx" << endl;
}
