#
# Copyright (C) 2016 The Android Open Source Project
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

# Build one shared lib. When we build, we set the bin to $user/tmp, and
# remove it after build complete, so only the distribution place could be
# used for application linking.

cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_VERBOSE_MAKEFILE on)

add_library(gperf SHARED src/gperf.c)

# copy out the lib binary and remove generated files
set(distribution_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../../../../distribution)
#这段代码是用于设置目标属性和自定义命令的CMake指令。让我逐行解释其含义：
#
#set_target_properties(gperf PROPERTIES LIBRARY_OUTPUT_DIRECTORY "${distribution_DIR}/gperf/lib/${ANDROID_ABI}")：
#这个指令设置目标属性。具体地，它将目标 gperf 的属性 LIBRARY_OUTPUT_DIRECTORY 设置为 ${distribution_DIR}/gperf/lib/${ANDROID_ABI}。这意味着在构建 gperf 目标时，生成的库文件将会被输出到 ${distribution_DIR}/gperf/lib/${ANDROID_ABI} 目录中。${distribution_DIR} 和 ${ANDROID_ABI} 是变量，分别表示分发目录和当前选择的 Android ABI。
#
#add_custom_command(TARGET gperf POST_BUILD COMMAND "${CMAKE_COMMAND}" -E copy "${CMAKE_CURRENT_SOURCE_DIR}/src/gperf.h" "${distribution_DIR}/gperf/include/gperf.h" COMMENT "Copying gperf to output directory")：
#这个指令添加一个自定义命令。具体地，它告诉 CMake 在构建完目标 gperf 之后执行以下命令：
#
#bash
#Copy code
#"${CMAKE_COMMAND}" -E copy "${CMAKE_CURRENT_SOURCE_DIR}/src/gperf.h" "${distribution_DIR}/gperf/include/gperf.h"
#这条命令的作用是将 ${CMAKE_CURRENT_SOURCE_DIR}/src/gperf.h 文件复制到 ${distribution_DIR}/gperf/include/gperf.h 目录中。${CMAKE_COMMAND} 是 CMake 的内置变量，它指向 CMake 的可执行文件路径。"${CMAKE_COMMAND}" -E copy 是一个 CMake 提供的命令，用于执行文件复制操作。该自定义命令还包括一个注释，表示在构建过程中复制 gperf.h 到输出目录。
#
#综上所述，这段代码的作用是设置生成的库文件的输出目录，并在构建完目标之后执行一个自定义命令，将 gperf.h 文件复制到指定的输出目录。这样可以确保生成的库文件和相关头文件都被正确地放置到相应的位置。
set_target_properties(gperf
                      PROPERTIES
                      LIBRARY_OUTPUT_DIRECTORY
                      "${distribution_DIR}/gperf/lib/${ANDROID_ABI}")
add_custom_command(TARGET gperf POST_BUILD
                   COMMAND "${CMAKE_COMMAND}" -E
                   copy "${CMAKE_CURRENT_SOURCE_DIR}/src/gperf.h"
                   "${distribution_DIR}/gperf/include/gperf.h"
                   COMMENT "Copying gperf to output directory")

