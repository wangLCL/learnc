
#
# Copyright (C) The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

# Generate one static lib and one shared lib, copy them into
# ${project_dir}/distribution for other indepdendent applications
# to use.
#这个指令指定了项目所需的CMake的最低版本。
cmake_minimum_required(VERSION 3.4.1)
#这个指令设置了生成的Makefile的详细输出，以便在构建过程中显示更多的信息。
set(CMAKE_VERBOSE_MAKEFILE on)
#这个指令设置了变量lib_src_DIR，它存储当前源代码目录的路径。
set(lib_src_DIR ${CMAKE_CURRENT_SOURCE_DIR})

set(lib_build_DIR $ENV{HOME}/tmp/${ANDROID_ABI})
# 存放输出目录
file(MAKE_DIRECTORY ${lib_build_DIR})
#这个指令将${lib_src_DIR}/gmath目录中的源代码添加到构建过程中，并将构建结果放在${lib_build_DIR}/gmath目录中。这意味着该项目包含一个名为"gmath"的子项目。
add_subdirectory(${lib_src_DIR}/gmath ${lib_build_DIR}/gmath)
add_subdirectory(${lib_src_DIR}/gperf ${lib_build_DIR}/gperf)

