#include <iostream>
#include "People.h"
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
int main() {
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

	{
		Cat *cat = new Cat();
		cat->eat();
	}
}