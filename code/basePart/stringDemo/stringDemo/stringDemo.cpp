
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    string str;//创建一个长度为0的string对象
    cout << str.npos << endl;
    //得到当前容量，可以存放字符的总数
    //15 31
    cout<< "str.capacity():" << str.capacity() << endl;
    cout << "s.size()" << str.size() << endl;//返回数据的大小
    cout << "" << (void*)str.c_str() << endl;

    //拷贝构造函数
    string ss = str;
    string s1(str);

}