//
// Created by Quark Pixel on 2024/3/12.
//
#include "utils.h"
#include <chrono>

using namespace std::chrono_literals;


int ut::fps() {
    static auto start = std::chrono::steady_clock::now();
    auto end = std::chrono::steady_clock::now();;

    static int frame_count = 0;
    static int fps = 0;

    frame_count++;
    if (end - start > 1s) { //满足1s时执行
        fps = frame_count;

        frame_count = 0; //重置counter
        start = end;//重置计时器start
    }

    return fps;
}