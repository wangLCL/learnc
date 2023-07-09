#include <jni.h>
#include <string>
#include <thread>

int countTime = 0;
using namespace std;

extern "C" JNIEXPORT jstring JNICALL
Java_com_wk_a2_1ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject jobject1 /* this */) {

    string hello = "Hello from C++";
    hello += to_string(countTime);
    hello += "xxxxxx";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_wk_a2_1ndkdemo_MainActivity_callBackMethod(JNIEnv *env, jobject thiz) {
//    jclass clz = env->FindClass("com/wk/a2_ndkdemo/MainActivity");
//    jmethodID methodId = env->GetMethodID(clz,"updateTime","()V");
//    env->CallVoidMethod(thiz,methodId);
    jclass clz = env->FindClass("com/wk/a2_ndkdemo/MainActivity");
    jmethodID methodId = env->GetMethodID(clz,"update","(II)V");
    env->CallVoidMethod(thiz,methodId,4,6);
}
extern "C"
JNIEXPORT jint JNICALL
Java_com_wk_a2_1ndkdemo_MainActivity_add(JNIEnv *env, jobject thiz, jint a, jint b) {
    int ia = a;
    int ib = b;
    return ia + ib;
}