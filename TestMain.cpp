#include <iostream>
#include "Game.h"
#include <ctime>

using namespace std;

int main() {
    srand((unsigned)time(NULL));
    Game tetris;
    tetris.run();
    return 0;
}