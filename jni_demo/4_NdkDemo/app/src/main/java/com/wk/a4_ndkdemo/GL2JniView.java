package com.wk.a4_ndkdemo;

import android.content.Context;
import android.graphics.PixelFormat;
import android.opengl.GLSurfaceView;
import javax.microedition.khronos.egl.EGLConfig;
import javax.microedition.khronos.opengles.GL10;

public class GL2JniView extends GLSurfaceView {
    private static String TAG = "GL2JNIView";
    private static final boolean DEBUG = false;

    public GL2JniView(Context context) {
        super(context);
        init(false);
    }

    private void init(boolean translucent) {
//        在 Android 开发中，this.getHolder() 是指当前视图或表面（Surface）的持有者（Holder），
//        而 setFormat() 是用于设置表面像素格式的方法。PixelFormat.TRANSLUCENT 是 Android 提
//        供的一个常量，表示透明的像素格式。
//        通过调用 this.getHolder().setFormat(PixelFormat.TRANSLUCENT)，你可以将当前视图或
//        表面的像素格式设置为透明。这意味着该视图或表面将能够显示透明的图像或内容，使后面的视图或背景可
//        见。
//        这种设置对于需要在一个视图或表面上绘制半透明的图形、覆盖物或效果非常有用，以及需要实现透明背景
//        的 UI 元素等情况。
        if (translucent) {
            this.getHolder().setFormat(PixelFormat.TRANSLUCENT);
        }
        setRenderer(new Renderer());
    }

    private static class Renderer implements GLSurfaceView.Renderer {
        public void onDrawFrame(GL10 gl) {
            GL2JNILib.step();
        }

        public void onSurfaceChanged(GL10 gl, int width, int height) {
            GL2JNILib.init(width, height);
        }

        public void onSurfaceCreated(GL10 gl, EGLConfig config) {
            // Do nothing.
        }
    }
}
