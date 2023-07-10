#include "main.h"
#include <iostream>
using namespace std;

JNIEXPORT void JNICALL Java_org_example_Main_sayHello
(JNIEnv* jnienv, jobject job) {
	cout << "c++" << endl;
}
