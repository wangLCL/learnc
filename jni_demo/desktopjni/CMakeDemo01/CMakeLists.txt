# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)


project ("CMakeDemo01")

include_directories("D:/Program Files/jdk/include")
include_directories("D:/Program Files/jdk/include/win32")


# 设置生成 动态库
# 配置格式是 : 动态库名称 动态库标识( SHARED ) 包含的源文件( 如果有多个就写多个 )
add_library( CMakeDemo01 SHARED CMakeDemo01/CMakeDemo01.cpp CMakeDemo01/CMakeDemo01.h )

# 包含子项目。
#add_subdirectory ("CMakeDemo01")




# 将源代码添加到此项目的可执行文件。
#add_executable (009_Cmake "009_Cmake.cpp" "009_Cmake.h")