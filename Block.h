#pragma once
class Block
{
public:
    static const int SHAPES[7][4][4][4];
    int shape, angle, x, y;

    Block(int s = 0);
    void rotate();
    int getAngle() const;
};

