#include<iostream>
using namespace std;

//1.1.3
void _1_1_3_showInfo() {
	cout << "show info" << endl;
}

//1.3
void _1_3_Var() {
	int a = 10;
	cout << a << endl;
}

void _1_4_const() {
	const int a = 10;
	//a = 19; //不可以修改
	cout << a << endl;
}

void _2_2_sizeOf() {
	int a = 10;
	cout << sizeof(a) << endl;
	cout << sizeof(int) << endl;
}

void _2_3_shi() {
	float f1 = 10.1f;
	double d1 = 10.3;

	cout << f1 << endl;
	cout << d1 << endl;

	cout << sizeof(f1) << endl;
	cout << sizeof(d1) << endl;
}

void _2_4_char() {
	char xx = 'a';
	cout << xx << endl;
	cout << sizeof(xx) << endl;
}

void _2_6_string() {
	char str[] = "xxxx";
	cout << str << endl;
}

void _2_7_boolean(){
	bool xx = false;
	cout << xx << endl;
	xx = true;
	cout << xx << endl;
}

void _2_8_cin(){
	int a;
	cin >> a;
	cout << a << endl;
	float f;
	cin >> f;
	cout << f << endl;
}
/*
*  比较简单    算术  赋值  等
*/
void _3_1_suansu() {
	int a = 12;
	int b = 2;
}

void _4_1_iF() {
	int a = 19;
	if (a > 10) {
		cout << "大于10" << endl;
	}else {
		cout << "小于10" << endl;
	}
}

void _4_1_2_three() {
	int a = 10;
	int b = 20;
	a = a > b ? -1 : 1;
	cout << a << endl;
}

//switch ： 整型和字符

void _5_2_shuzu(){
	{
		int a[10];
		for (int i = 0; i < 10; i++) {
			a[i] = i;
			cout << a[i] << endl;
			cout << &a[i] << endl;
		}
	}
	{
		cout << endl;
		int a[10] = {1,2,3,4,5};
		for (int i = 0; i < 10; i++) {
			cout << a[i] << endl;
			cout << &a[i] << endl;
		}
	}
}

void _7_1_point(){
	int a = 10;
	int* p = &a;
	cout << a << endl;
	cout << *p << endl;
	cout << sizeof(p) << endl;
}

void _7_6_pointArr(){
	int arr[] = { 10,11,12,14 };
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] <<endl;
	}

	int* p = arr;
	cout << p[0] << endl;
	cout << *p << endl;
	cout << *p << endl;
}

struct People {
	string name;
};
void _8_1_struct() {

	People p;
	p.name = "xxx";

	cout << p.name << endl;
}

void _three_1_3_newDelete() {
	int* a = new int(10);
	cout << *a << endl;
	delete a;
	
	int *aa = new int[10];
	for (int i = 0; i < 10; i++) {
		aa[i] = i;
	}
	for (int i = 0; i < 10; i++) {
		cout << aa[i] << endl;
	}
	delete aa;
}

void yinyong() {
	int a = 10;
	int& ra = a;

	cout << a << "   " << ra;
	ra = 11;
	cout << a << "   " << ra;
	a = 12;
	cout << a << "   " << ra;

}


void swap(int a,int b) {
	int te = a;
	a = b;
	b = a;
}

void swap1(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void swap2(int& a, int& b) {
	int temp = a; 
	a = b;
	b = temp;

}

void testSwap() {
	int a = 10;
	int b = 12;
	cout << a << "   " << b << endl;
	swap(a, b);
	cout << a <<"   " << b << endl;
	a = 10;
	b = 12;
	cout << a << "   " << b << endl;
	swap1(&a,&b);
	cout << a << "   " << b << endl;
	a = 10;
	b = 12;
	cout << a << "   " << b << endl;
	swap2(a, b);

	cout << a << "   " << b << endl;
}
int main() {
	testSwap();
	//yinyong();
	//_three_1_3_newDelete();
	//_8_1_struct();
	//_7_6_pointArr();
	//_7_1_point();
	//_5_2_shuzu();
	//_4_1_2_three();
	//_4_1_iF();
	//_2_8_cin();
	//_2_7_boolean();
	//_2_6_string();
	//_2_4_char();
	//_2_3_shi();
	//_1_1_3_showInfo();
	//_1_3_Var();
	//_1_4_const();
	//_2_2_sizeOf();
	
} 