#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#define debug 1
void gotoxy(int x, int y) {
	COORD Pos;
	Pos.X = x*2;//공백은 2칸(2칸기준 x축이동)
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
void fullscreen() {
	
#if debug
	SetConsoleDisplayMode(GetStdHandle(STD_OUTPUT_HANDLE), CONSOLE_FULLSCREEN_MODE,0);
#endif
#if debug!=1
	system("mode con cols=240 lines=62");
#endif
}
void setcolor(unsigned short text, unsigned short back) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), text | (back << 4));
}
void backcolor(unsigned short num) {
	char com[20];
	sprintf(com, "color 0%x", num<<4);
	system(com);

}
void info(int i,int j) {
	system("title ■ TETRIS ■");
	backcolor(i);
	setcolor(j, i);
}

void CursorView(char show)
{
	HANDLE hConsole;
	CONSOLE_CURSOR_INFO ConsoleCursor;

	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 1;

	SetConsoleCursorInfo(hConsole, &ConsoleCursor);
}

