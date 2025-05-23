#include "Console.h"

void Console::gotoxy(int x, int y) {
	COORD pos = { (SHORT)x,(SHORT)y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Console::setColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}