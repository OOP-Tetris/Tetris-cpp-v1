#pragma once
#include <windows.h>
enum Color {
	BLACK, DARK_BLUE, DARK_GREEN, DARK_SKY_BLUE, DARK_RED, DARK_VOILET,
	DARK_YELLOW, GRAY, DARK_GRAY, BLUE, GREEN, SKY_BLUE, RED, VOILET, YELLOW, WHITE
};

class Console
{
public:
	static void gotoxy(int x, int y);
	static void setColor(int color);

};

