#include <jni.h>
#include <string>
#include "csource/People.h"
extern "C"
JNIEXPORT jstring JNICALL
Java_com_wk_selfstart_MainActivity_jniString(JNIEnv *env, jobject thiz) {
    // TODO: implement jniString()
    std::string hello = "Hello from C++";
    hello+="dddd";
    People *people = new People();
    people->setName("ka");
    people->setAge(100);
    hello = hello +"名字是："+ people->getName();
    hello = hello + "年纪:"+to_string(people->getAge());
    return env->NewStringUTF(hello.c_str());
}