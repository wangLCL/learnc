#include "jni.h"
#include <string>
#include "MathUtils.h"
#include "People.h"
extern "C" JNIEXPORT jstring JNICALL
Java_kw_learn_ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    People* people = new People("kangwang",19);
    people->getAge();
    people->printlnfo();
    std::string hello = people->getName();
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_max(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement max()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->max(a,b);
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_min(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement min()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->min(a,b);
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_ch(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement ch()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->ch(a,b);
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_chu(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement chu()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->chu(a,b);
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_mode(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement mode()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->mode(a,b);
}
extern "C"
JNIEXPORT jint JNICALL
Java_kw_learn_ndkdemo_MainActivity_clamp(JNIEnv *env, jobject thiz, jint a, jint b) {
    // TODO: implement clamp()
    MathUtils *mathUtils  = new MathUtils();
    return mathUtils->clamp(a,b);
}