#include <iostream>
//#include <cstdlib>
#include "terminal.h"
#include <chrono>
#include <thread>

using namespace std::chrono;

int main() {

    tc::hideCursor();

    int i = 1;

    while (true) {
        tc::cleanScreen();
        tc::moveTo(i++, 10);
        tc::setBackColor(15);
        std::cout << "  ";
        tc::resetColor();
        std::cout << std::flush;
        std::this_thread::sleep_for(500ms);

    }
    std::system("pause");
    return 0;
}
