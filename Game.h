// Game.h
#pragma once

#include "Block.h"
#include "Stage.h"
#include "Console.h"
#include "Map.h"

class Game {
private:
    int level;               // ���� �������� (0~9)
    int score;               // ����
    int lines;               // ���� ������������ Ŭ������ �� ��
    int ab_x, ab_y;          // ���� �� ��� ���� ��ġ
    bool isCurrentBlockActive; // ���� ���� �����ƴ��� ����

    char totalBlock[21][14]; // ���� ��ü �� (������ �� ����)
    Block currentBlock;      // ���� �������� ��
    Block nextBlock;         // ���� ��
    Stage stages[10];        // ���������� �ӵ�, ���� ��
    Map map;

public:
    Game();

    void run();                         // ���� ���� �� ���� ����
    void update();                      // �� �ڵ� �ϰ� �� ���� ó��
    void handleInput();                 // ����� Ű �Է� ó��
    void draw();                        // ��ü �׸��� (�� + �� + ����â)


   
    
    void clearLines();                 // �� ���� �� ���� ó��

    bool checkCollision(const Block& blk);   // �浹 ���� Ȯ��
    int makeNewBlock();                      // �� �� ���� ���� ����
    bool inputLevel();                       // ���� ���� �Է�

};

