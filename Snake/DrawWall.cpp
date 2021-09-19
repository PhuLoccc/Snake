//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include<conio.h>
//#include<time.h>
//#define _CRT_SECURE_NO_WARNINGS
//#define DOT_RAN 254
//#define MAX 100
//#define LEN 1
//#define XUONG 2
//#define TRAI 3
//#define PHAI 4
//#define WallTop 5
//#define WallBot 28
//#define WallLeft 0
//#define WallRight 118
//void Nocursortype()
//{
//	CONSOLE_CURSOR_INFO Info;
//	Info.bVisible = FALSE;
//	Info.dwSize = 20;
//	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
//}
//void gotoxy(short x, short y)
//{
//	HANDLE hConsoleOutput;
//	COORD Cursor_an_Pos = { x, y };
//	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
//	SetConsoleCursorPosition(hConsoleOutput, Cursor_an_Pos);
//}
//void DrawWall()
//{
//	for (int i = WallLeft; i <= WallRight; i++)// ve tuong tren
//	{
//		gotoxy(i, WallTop);
//		printf("%c", 220);
//	}
//	for (int i = WallTop + 1; i <= WallBot; i++)// tuong trai
//	{
//		gotoxy(WallLeft, i);
//		printf("%c", 221);
//	}
//	for (int i = WallTop + 1; i <= WallBot; i++)
//	{
//		gotoxy(WallRight, i);
//		printf("%c", 222);
//	}
//	for (int i = WallLeft; i <= WallRight; i++)
//	{
//		gotoxy(i, WallBot);
//		printf("%c", 223);
//	}
//}
//void printChar()
//{
//	for (int i = 0; i < 255; i++) {
//		printf("%d. %c\n", i, i);
//	}
//}
//void main() {
//	printChar();
//}
