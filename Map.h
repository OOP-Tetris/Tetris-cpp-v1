#include "Console.h"

class Map {
private:
    int ab_x, ab_y;

public:
    Map(int x = 5, int y = 1);

    void drawFrame(int level);
    void drawFixedBlocks(char totalBlock[21][14]);
    void drawGameStatus(int level, int score, int remainingLines);
    void drawNextBlock(int shape, int angle);
};