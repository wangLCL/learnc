// CMakeDemo01.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once
#include <iostream>
#include "jni.h"

#ifndef _Included_org_example_Main
#define _Included_org_example_Main
#ifdef __cplusplus
extern "C" {
#endif
	/*
	 * Class:     org_example_Main
	 * Method:    sayHello
	 * Signature: ()V
	*/
JNIEXPORT void JNICALL Java_org_example_Main_sayHello
(JNIEnv*, jobject);

#ifdef __cplusplus
}
#endif
#endif

// TODO: 在此处引用程序需要的其他标头。
