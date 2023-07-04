# learnc
学习c++语言
简单案例以及笔记

后面没有计划  看时间吧

## java 如何使用c++

desktop如何使用呢？

vs 2019 + idea + java(11)

1.首先写一个本地接口
```java
public class Main {
    static {
        System.load("E:\\learnc\\jni_demo\\desktopjni\\desktopjni\\x64\\Debug\\desktopjni.dll");
    }

    public static void main(String[] args) {
        System.out.println("Hello world!");
        Main main = new Main();
        main.sayHello();
    }

    public native void sayHello();

    public native void sayName();
}
```

2.使用javac工具执行

```shell
javac -h 输出目录  输入文件
```

3.vs创建空项目

4.复制jdk中的jni.h和jni_md.h

5.将Java生成的.h文件复制过来

6.创建cpp，实现方法

7.设置为64位，然后生成

8.在java中写入绝对路径


## NDK

它是jni的一个分支

## cmake

1.创建项目 : 在欢迎界面中 , 点击创建新项目
2.选择 CMake 项目 , 点击下一步 ;
3.置项目名称 , 选择项目位置 , 点击 “创建” 按钮 ;
4.配置 CMakeList.txt 配置文件 , 设置生成动态库选项 ;
默认生成的是可执行文件 , 但是此处我们要生成动态库 , 因此将默认的配置注释掉 ;
生成动态库的配置格式 : add_library( 库名称 库类型 包含的源文件 ) ;

```xml
# CMakeList.txt: 009_Cmake 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)


# 设置生成 动态库
# 配置格式是 : 动态库名称 动态库标识( SHARED ) 包含的源文件( 如果有多个就写多个 )
add_library( 009_Cmake SHARED 009_Cmake.cpp 009_Cmake.h )



# 将源代码添加到此项目的可执行文件。
#add_executable (009_Cmake "009_Cmake.cpp" "009_Cmake.h")

# TODO: 如有需要，请添加测试并安装目标。
```

5.生成动态库 : 使用 “Ctrl + Shift + B” 快捷键 , 编译项目 , 即可生成动态库 ;
查看动态库 : 在项目的 “项目根目录\out\build\x64-Debug\009_Cmake” 目录下有生成的 009_Cmake.dll 动态库 , 这是个 Windows 动态库 ;

动态库生成目录 : Y:\002_WorkSpace\002_VS\009_Cmake\out\build\x64-Debug\009_Cmake