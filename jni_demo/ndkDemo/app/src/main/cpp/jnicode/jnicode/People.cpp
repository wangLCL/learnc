#include "People.h"

People::People(){
	this->name = "";
	this->age = 0;
};

People::People(string name,int age) {
	this->name = name;
	this->age = age;
}

int People::getAge() {
	return 0;
}

string People::getName() {
	return name;
}

void People::printlnfo() {
	cout << "name:---------------------------------------------------------------------------------------" << name<< "age:" << age << endl;
}