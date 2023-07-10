package com.wk.a4_ndkdemo;

public class GL2JNILib {

    static {
        System.loadLibrary("gl2jni");
    }

    /**
     * @param width the current view width
     * @param height the current view height
     */
    public static native void init(int width, int height);
    public static native void step();
}
