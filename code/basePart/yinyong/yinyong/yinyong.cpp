// yinyong.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
void func1(int a, int b) {
    cout << " a : " << a << "b:"<< b << endl;
}

void func2(const int const* a, int* b) {
    cout << "a:" << a << "b" << *b << endl;
}

void func3(const int& a, const int& b) {
    cout << "a:" << a << "b:" << b;
}
int main()
{
    int a = 0;
    int b = 2;
    //func1(1, 3);
    func2(&a, &b); // 需要传递的是值，不是这个乱七八糟的
  
    //func2(&a, &b);
   // func3(0, 2);
    std::cout << "Hello World!\n";
}
