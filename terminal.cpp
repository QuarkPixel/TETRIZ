//
// Created by Administrator on 2024/3/10.
//

#include "terminal.h"
#include <iostream>

#define CSI "\033["

void tc::moveTo(const int row, const int col) {
    std::cout << CSI << row << ';' << col << 'H';
}

void tc::setForeColor(const int id) {
    std::cout << CSI << "38;5;" << id << 'm';
}

void tc::setBackColor(const int id) {
    std::cout << CSI << "48;5;" << id << 'm';
}

void tc::cleanScreen() {
    std::cout << CSI << "2J";
}

void tc::resetColor() {
    std::cout << CSI << "0m";
}

void tc::hideCursor() {
    std::cout << CSI << "?251";
}

void tc::showCursor() {
    std::cout << CSI << "?25h";
}