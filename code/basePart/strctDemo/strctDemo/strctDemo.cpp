#include <iostream>
using namespace std;

struct People {
    char name[20] = "kw";
    int age = 100;
};
int main()
{
    struct People p = {"chenyike",102};
    std::cout << "Hello World!\n";
    std::cout <<"age" << p.age << "\nname:" << p.name << "\n";
    std::cout << "Hello World!\n";

   

    People* pp = &p;
    cout << pp->age << endl;
    cout << pp->name << endl;
    cout << (*pp).age << endl;
    cout << pp->name << endl;
    
    enum colors {
        red,vv,ss
    };
    //值为012
    colors f = red; //对
//    colors xx = 0; //x
}