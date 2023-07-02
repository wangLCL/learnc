#include <iostream>
#include <thread>
#include <windows.h>
using namespace std;
void func() {
    for (int i = 0; i <= 10; i++) {
        cout << "这是一句话！" << endl;
        Sleep(1000);
    }
}

int main()
{
    thread* t1 = new thread(func);
    for (int i = 0; i <= 10; i++) {
        std::cout << "Hello World!\n";
        Sleep(1000);
    }
    t1->join();

    thread t2(func);
}