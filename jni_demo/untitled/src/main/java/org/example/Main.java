package org.example;

public class Main {
    static {
//        System.load("E:\\learnc\\jni_demo\\desktopjni\\desktopjni\\x64\\Debug\\desktopjni.dll");
        System.load("E:\\learnc\\jni_demo\\desktopjni\\CMakeDemo01\\out\\build\\x64-Debug\\CMakeDemo01.dll");
    }

    public static void main(String[] args) {
        System.out.println("Hello world!");
        Main main = new Main();
        main.sayHello();
    }

    public native void sayHello();

    public native void sayName();
}