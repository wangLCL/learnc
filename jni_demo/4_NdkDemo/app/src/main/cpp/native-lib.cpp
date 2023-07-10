#include <jni.h>
#include <string>
#include <GLES2/gl2.h>
#include <android/log.h>
#include <iostream>
using namespace std;

#define LOG_TAG "libgl2jni"
#define LOGI(...) __android_log_print(ANDROID_LOG_INFO, LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)

static void printGLString(const string name, GLenum s) {
    const char* v = (const char*)glGetString(s);
    LOGI("GL %s = %s\n", name.c_str(), v);
}

auto gVertexShader =
        "attribute vec4 vPosition;\n"
        "void main() {\n"
        "  gl_Position = vPosition;\n"
        "}\n";

auto gFragmentShader =
        "precision mediump float;\n"
        "void main() {\n"
        "  gl_FragColor = vec4(0.0, 1.0, 0.0, 1.0);\n"
        "}\n";

GLint loadShader(GLint type,string gVertexShader){
    GLuint typeShader = glCreateShader(type);
    if (typeShader != 0){
        const char *myString = gVertexShader.c_str();
        glShaderSource(typeShader, 1,&myString
                       , NULL)
    }
}
void createProgram(string gVertexShader,string gFragmentShader){
    loadShader(GL_VERTEX_SHADER,gVertexShader);
}

bool setupGraphics(int w, int h) {
    printGLString("Version", GL_VERSION);
    printGLString("Vendor", GL_VENDOR);
    printGLString("Renderer", GL_RENDERER);
    printGLString("Extensions", GL_EXTENSIONS);
    LOGI("setupGraphics(%d, %d)", w, h);

    createProgram(gVertexShader, gFragmentShader);
    if (!gProgram) {
        LOGE("Could not create program.");
        return false;
    }
    gvPositionHandle = glGetAttribLocation(gProgram, "vPosition");
    checkGlError("glGetAttribLocation");
    LOGI("glGetAttribLocation(\"vPosition\") = %d\n", gvPositionHandle);

    glViewport(0, 0, w, h);
    checkGlError("glViewport");
    return true;
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_wk_a4_1ndkdemo_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT void JNICALL
Java_com_wk_a4_1ndkdemo_GL2JNILib_init(JNIEnv *env, jclass clazz, jint width, jint height) {
    // TODO: implement init()
    setupGraphics(width,height)
}
extern "C"
JNIEXPORT void JNICALL
Java_com_wk_a4_1ndkdemo_GL2JNILib_step(JNIEnv *env, jclass clazz) {
    // TODO: implement step()

}