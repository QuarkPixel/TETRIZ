//
// Created by Administrator on 2024/3/10.
//

#ifndef TETRIZ_TERMINAL_H
#define TETRIZ_TERMINAL_H

namespace tc {
    void moveTo(int row, int col);

    void setForeColor(int id);

    void setBackColor(int id);

    void cleanScreen();

    void resetColor();

    void hideCursor();

    void showCursor();
}

#endif //TETRIZ_TERMINAL_H
