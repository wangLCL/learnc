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
	p->setName("���ض���");
	return *p;
}
int People::num = 10;
int main() {
	///*
	//������ʽ
	//*/
	//{
	//	//ֻ��new�ĲŻ��������
	//	People* people = new People();
	//	people->setAge(100);
	//	people->setName("xxxx");
	//	people->show();
	//}
	//{
	//	People people;
	//	people.setAge(100);
	//	people.setName("ջ�з��䣡");
	//	people.show();
	//}

	//{
	//	People people(10);
	//	people.setName("���з��䣡");
	//	people.show();
	//}
	//
	//{
	//	People people = (10);
	//	people.setName("���з��䣡");
	//	people.show();
	//}
	//
	//{
	//	People people = People(10);
	//	people.setName("���з��䣡");
	//	people.show();
	//}

	//{
	//	People people = People(10);
	//	people.setName("���з��䣡");
	//	people.show();
	//	People pp(people);
	//	pp.show();
	//}

	///*
	//����������õ�ʱ��
	//*/
	//{
	//	//1.�Ѿ����ڵĴ����µ�
	//	People people = People(10);
	//	people.setName("���з��䣡");
	//	people.show();
	//	People pp(people);
	//	pp.show();
	//}
	//{
	//	//ֵ�ķ�ʽ���ݲ���
	//	People people = People(10);
	//	people.setName("ֵ���ݣ�");
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