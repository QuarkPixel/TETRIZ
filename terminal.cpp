//
// Created by Administrator on 2024/3/10.
//

#include "terminal.h"
#include <iostream>

#define CSI "\033["

void tc::move_to(const int row, const int col) {
    std::cout << CSI << row << ';' << col << 'H';
}

void tc::set_fore_color(const int id) {
    std::cout << CSI << "38;5;" << id << 'm';
}

void tc::set_back_color(const int id) {
    std::cout << CSI << "48;5;" << id << 'm';
}

void tc::clean_screen() {
    std::cout << CSI << "2J";
}

void tc::reset_color() {
    std::cout << CSI << "0m";
}

void tc::hide_cursor() {
    std::cout << CSI << "?251";
}

void tc::show_cursor() {
    std::cout << CSI << "?25h";
}