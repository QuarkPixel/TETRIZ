//
// Created by Administrator on 2024/3/10.
//

#ifndef TETRIZ_TERMINAL_H
#define TETRIZ_TERMINAL_H

namespace tc {
    void move_to(int row, int col);

    void set_fore_color(int id);

    void set_back_color(int id);

    void clean_screen();

    void reset_color();

    void hide_cursor();

    void show_cursor();
}

#endif //TETRIZ_TERMINAL_H
