
#include <iostream>
using namespace std;
int main()
{
    //创建空的数组
    string str;//创建一个长度为0的string对象
    cout << str.npos << endl; //非常大的值 可以存放多少
    //得到当前容量，可以存放字符的总数
    //15 31
    cout<< "str.capacity():" << str.capacity() << endl;
    cout << "s.size()" << str.size() << endl;//返回数据的大小
    cout << "" << (void*)str.c_str() << endl;//打印地址  str.c_str()返回的是一个指针数组

    //string str(const char * str)
    string ss = "str";
    string s1("str");

    //string str(const string &str)    //拷贝构造函数  两个都是一样的
    string sstr3(ss);
    string str4 = ss;

    //string (const char *s,size_t n) //前n个
    string str5("hrllo", 4);
    string str6("hrllo", 100); //复制后面100个内容，但是无论是什么
    cout << str5 << str6 << endl;

    //string (const string &str,size_t star = 0,int end = nPos)
    string str7("heloo", 3);//会调用上面的方法，而不是这个
    string str8("hello", 2, 3);
    
    //迭代器在说把

    //string (int n,char x)  n个x组成的字符串
}