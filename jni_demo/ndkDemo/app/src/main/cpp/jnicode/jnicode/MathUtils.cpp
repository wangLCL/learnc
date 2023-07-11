//
// Created by Administrator on 2023/7/6.
//

#include "MathUtils.h"

int MathUtils::min(int a, int b) {
    return a > b? b : a;
}

int MathUtils::max(int a, int b) {
    return a >  b ? a : b;
}

int MathUtils::ch(int a, int b) {
    return a * b;
}

int MathUtils::chu(int a, int b) {
    return a / b;
}

int MathUtils::mode(int a, int b) {
    return a % b;
}

int MathUtils::clamp(int a, int b) {
    return a;
}