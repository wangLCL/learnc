#include <iostream>
#include "People.h"
#include  <vector>
#include <algorithm>
#include"Cat.h"
using namespace std;

void show(People people) {
	cout << people.getAge() << "  " << people.getName() << endl;
}

People returnObj() {
	People* p = new People();
	p->setAge(100);
	p->setName("返回对象");
	return *p;
}
int People::num = 10;


void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
//函数模板
template <typename T>
void swapNum(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//重载函数模板感觉不是很理解  不知道存在的意义

void swapNum(People& p, People& p1) {

}


void print1(int val) {
	cout << val << endl;
}

void vectorTest() {
	vector<int> v;
	for(int i = 0;i<100;i++){
		v.push_back(i);
	}
	//vector<int> ::iterator begin = v.begin();
	//vector<int> ::iterator end = v.end();
	//while (begin != end) {
	//	cout << *begin << endl;
	//	begin++; //指针++
	//}

	/*for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}*/

	//for_each(v.begin(), v.end(),print1);

	for (int i = 0; i < 100; i++) {
		//cout << v[i] << "    ";
		cout <<v.at(i) << endl;
	}

}

void stringDemo() {
	string str1 = "xxxxxxxxxx";
	cout << str1 << endl;

	char strchar[10] = "xxxx";
	cout << strchar << endl;

	const char* strchar1 = "xxx";
	//常量
	cout << strchar1 << endl;

	//=  
	//1.常量 const char * str;
	//2.const string &str;
	//3.char c

	//4.+= ：const char *c
	//5.+= : const char c;
	//6.+= : const string &str


}

int main() {
	//stringDemo();
	vectorTest();
	//int a = 39;
	//int b = 30;
	//std::cout << a << "   " << b << endl;
	//swapNum(a,b);
	//std::cout << a << "   " << b << endl;


	///*
	//创建方式
	//*/
	//{
	//	//只有new的才会调用析构
	//	People* people = new People();
	//	people->setAge(100);
	//	people->setName("xxxx");
	//	people->show();
	//}
	//{
	//	People people;
	//	people.setAge(100);
	//	people.setName("栈中分配！");
	//	people.show();
	//}

	//{
	//	People people(10);
	//	people.setName("堆中分配！");
	//	people.show();
	//}
	//
	//{
	//	People people = (10);
	//	people.setName("堆中分配！");
	//	people.show();
	//}
	//
	//{
	//	People people = People(10);
	//	people.setName("堆中分配！");
	//	people.show();
	//}

	//{
	//	People people = People(10);
	//	people.setName("堆中分配！");
	//	people.show();
	//	People pp(people);
	//	pp.show();
	//}

	///*
	//拷贝构造调用的时机
	//*/
	//{
	//	//1.已经存在的创建新的
	//	People people = People(10);
	//	people.setName("堆中分配！");
	//	people.show();
	//	People pp(people);
	//	pp.show();
	//}
	//{
	//	//值的方式传递参数
	//	People people = People(10);
	//	people.setName("值传递！");
	//	show(people);
	//}
	//{
	//	People p = returnObj();
	//	p.show();
	//}
	//{
	//	
	//	People p1;
	//	People p2;
	//	p1.num = 20;
	//	cout << p1.num << endl;
	//	cout << p2.num << endl;
	//	cout << People::num << endl;
	//
	//	p2.num = 109;

	//	cout << p1.num << endl;
	//	cout << p2.num << endl;
	//	cout << People::num << endl;

	//
	//}

	/*{
		People *p = new People();
		p->printData();

		People::printData();
	}*/

	/*{
		People* p = new People();
		p->peopleInfo()
	}*/

	/*{
		Cat *cat = new Cat();
		cat->eat();
	}*/
}