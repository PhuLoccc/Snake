//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<Windows.h>
//#include<conio.h>
//#include<time.h>
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
//struct TOADO
//{
//	int x;
//	int y;
//};
//struct NODE
//{
//	TOADO info;
//	NODE* pNext;
//	NODE* pPrevious;
//};
//TOADO randomFOOD();
//bool checkPosOfFood(NODE* head, TOADO food);
//void DrawWall();
//void InitializeSNAKE(NODE*& head);
//NODE* findendNODE(NODE* head);
//TOADO Move(NODE* head, int huong);
//void DisplaySNAKE(NODE* head, TOADO endNODE, int huong);
//void DisplaySNAKE_2(NODE* head, TOADO end);
//void GetFromKeyBoard(int& huong);
//bool GameOver(NODE* head);
//bool checkAte(NODE* head, NODE* food);
//TOADO getEndNODE(NODE* head, int huong);
//void InsertNODE(NODE*& head, TOADO endNODE);
//int countNODE(NODE* head);
//void DisPlayScore(int score);
//void DisPlayPlayer(char* name, int tuoi);
//void ENDGAME(char* name, int score);
//void DisPlayFOOD(NODE* food);
//void InitializeFOOD(NODE*& food);
//void InsertFOOD(NODE* head, int nOFfood, NODE*& food);
//NODE* FindFOODtobeEaten(NODE* head, NODE* food);
//void ChangeNODETobeEATEN(NODE* head, NODE* food, NODE* nodeFoodTobeEaten);
//bool CheckSNAKE(NODE* head);
//int main()
//{
//	srand(time(NULL));
//	char* name = new char[100];
//	printf("Nhap ten: ");
//	gets_s(name, 100);
//	int age;
//	do
//	{
//		printf("Nhap tuoi: ");
//		scanf("%d", &age);
//		if (age < 18)
//		{
//			printf("Game nay chi danh cho nguoi tren 18 thoi nha %s oii :))\nNhap lai tuoi di\n", name);
//		}
//	} while (age < 18);
//	system("cls");
//	NODE* head;
//	InitializeSNAKE(head);
//	NODE* food;
//	InitializeFOOD(food);
//	int nOFfood = 3;
//	InsertFOOD(head, nOFfood, food);
//	DisPlayFOOD(food);
//	int huong = PHAI;
//	int score = 0;
//	gotoxy(50, 1);
//	printf("WELCOME TO MY GAME");
//	gotoxy(55, 2);
//	printf("Coding and design by Phu Loc");
//	DrawWall();
//	DisPlayPlayer(name, age);
//	DisPlayScore(score);
//	int time = 100;
//	Nocursortype();
//	while (true)
//	{
//		TOADO endNODE = getEndNODE(head, huong);
//		DisplaySNAKE(head, endNODE, huong);
//		Sleep(time);
//		GetFromKeyBoard(huong);
//		if (GameOver(head) == true)
//		{
//			break;
//		}
//		if (checkAte(head, food) == true)
//		{
//			NODE* eaten = FindFOODtobeEaten(head, food);
//			ChangeNODETobeEATEN(head, food, eaten);
//			DisPlayFOOD(food);
//			score++;
//			InsertNODE(head, endNODE);
//			DisPlayScore(score);
//			if (time == 1)
//			{
//				time = 1;
//			}
//			else
//			{
//				time = time - 1;
//			}
//		}
//	}
//	system("cls");
//	/*int after = countNODE(head);
//	int score = after - before;*/
//	ENDGAME(name, score);
//	system("pause");
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
//void InitializeSNAKE(NODE*& head)
//{
//	head = new NODE;
//	head->info.x = 3;
//	head->info.y = 8;
//	head->pPrevious = NULL;
//	NODE* p = new NODE;
//	p->info.x = 2;
//	p->info.y = 8;
//	p->pPrevious = head;
//	head->pNext = p;
//	NODE* q = new NODE;
//	q->info.x = 1;
//	q->info.y = 8;
//	q->pNext = NULL;
//	q->pPrevious = p;
//	p->pNext = q;
//}
//NODE* findendNODE(NODE* head)
//{
//	NODE* p = head;
//	NODE* q = new NODE;
//	while (p != NULL)
//	{
//		q = p;
//		p = p->pNext;
//	}
//	return q;
//}
//TOADO Move(NODE* head, int huong)
//{
//	TOADO temp = findendNODE(head)->info;
//	NODE* p = findendNODE(head);
//	while (p != head)
//	{
//		NODE* k = p->pPrevious;
//		p->info = k->info;
//		p = p->pPrevious;
//	}
//
//	switch (huong)
//	{
//	case LEN:
//		head->info.y--;
//		break;
//	case XUONG:
//		head->info.y++;
//		break;
//	case TRAI:
//		head->info.x--;
//		break;
//	case PHAI:
//		head->info.x++;
//		break;
//	}
//	return temp;
//}
//void DisplaySNAKE(NODE* head, TOADO endNODE, int huong)
//{
//	gotoxy(endNODE.x, endNODE.y);
//	printf(" ");
//	NODE* p = head;
//	while (p != NULL)
//	{
//
//		gotoxy(p->info.x, p->info.y);
//		if (p == head && huong == PHAI)
//		{
//			printf(">");
//		}
//		if (p == head && huong == TRAI)
//		{
//			printf("<");
//		}
//		if (p == head && huong == LEN)
//		{
//			printf("^");
//		}
//		if (p == head && huong == XUONG)
//		{
//			printf("v");
//		}
//		if (p != head)
//		{
//			printf("-");
//		}
//		p = p->pNext;
//	}
//}
//void DisplaySNAKE_2(NODE* head, TOADO end)
//{
//	while (head != NULL)
//	{
//		gotoxy(head->info.x, head->info.y);
//		printf("*");
//		head = head->pNext;
//	}
//	gotoxy(end.x, end.y);
//	printf(" ");
//}
//void GetFromKeyBoard(int& huong)
//{
//	if (_kbhit())
//	{
//		int key = _getch();
//
//		if (key == 'w' || key == 'W' || key == 72)
//		{
//			if (huong == XUONG)
//			{
//				huong = XUONG;
//			}
//			else {
//				huong = LEN;
//			}
//
//		}
//		else if (key == 's' || key == 'S' || key == 80)
//		{
//			if (huong == LEN)
//			{
//				huong = LEN;
//			}
//			else {
//				huong = XUONG;
//			}
//		}
//		else if (key == 'a' || key == 'A' || key == 75)
//		{
//			if (huong == PHAI)
//			{
//				huong = PHAI;
//			}
//			else
//			{
//				huong = TRAI;
//			}
//
//		}
//		else if (key == 'd' || key == 'D' || key == 77)
//		{
//			if (huong == TRAI)
//			{
//				huong = TRAI;
//			}
//			else
//			{
//				huong = PHAI;
//			}
//		}
//	}
//}
//TOADO randomFOOD()
//{
//	TOADO food;
//	food.x = (WallLeft + 1) + rand() % ((WallRight - 1) + 1 - (WallLeft + 1));
//	food.y = (WallTop + 1) + rand() % ((WallBot - 1) + 1 - (WallTop + 1));
//	return food;
//}
//bool checkPosOfFood(NODE* head, TOADO food)
//{
//	while (head != NULL)
//	{
//		if (head->info.x == food.x && head->info.y == food.y)
//		{
//			return true;
//		}
//		head = head->pNext;
//	}
//	return false;
//}
//bool GameOver(NODE* head)
//{
//	NODE* p = head;
//	if (p->info.y == WallTop)
//	{
//		return true;
//	}
//	else if (p->info.y == WallBot)
//	{
//		return true;
//	}
//	else if (p->info.x == WallLeft)
//	{
//		return true;
//	}
//	else if (p->info.x == WallRight)
//	{
//		return true;
//	}
//	else if (CheckSNAKE(head) == true)
//	{
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//bool checkAte(NODE* head, NODE* food)
//{
//	while (food != NULL)
//	{
//		if (head->info.x == food->info.x && head->info.y == food->info.y)
//		{
//			return true;
//		}
//		food = food->pNext;
//	}
//	return false;
//}
//bool CheckSNAKE(NODE* head)
//{
//	NODE* p = head->pNext;
//	while (p != NULL)
//	{
//		if (head->info.x == p->info.x && head->info.y == p->info.y)
//		{
//			return true;
//		}
//		p = p->pNext;
//	}
//	return false;
//}
//TOADO getEndNODE(NODE* head, int huong)
//{
//	TOADO endNODE = Move(head, huong);
//	return endNODE;
//}
//void InsertNODE(NODE*& head, TOADO endNODE)
//{
//	NODE* end = findendNODE(head);
//	NODE* p = new NODE;
//	p->info = endNODE;
//	p->pNext = NULL;
//	p->pPrevious = end;
//	end->pNext = p;
//}
//int countNODE(NODE* head)
//{
//	NODE* p = head;
//	int count = 0;
//	while (p != NULL)
//	{
//		count++;
//		p = p->pNext;
//	}
//	return count;
//}
//void DisPlayScore(int score)
//{
//	gotoxy(100, 1);
//	printf("Score is %d", score);
//}
//void DisPlayPlayer(char* name, int age)
//{
//	gotoxy(5, 1);
//	printf("Name: %s", name);
//	gotoxy(5, 2);
//	printf("Age: %d", age);
//}
//void ENDGAME(char* name, int score)
//{
//	gotoxy(35, 1);
//	printf("Thua roi %s oi ahahahaha do ngok", name);
//	gotoxy(35, 2);
//	printf("Chi dat duoc %d diem thoi nha cung\n", score);
//}
//void DisPlayFOOD(NODE* food)
//{
//	while (food != NULL)
//	{
//		gotoxy(food->info.x, food->info.y);
//		printf("%c", 254);
//		food = food->pNext;
//	}
//}
//void InsertFOOD(NODE* head, int nOFfood, NODE*& food)
//{
//	TOADO info;
//	for (int i = 0; i < nOFfood; i++)
//	{
//		do {
//			info = randomFOOD();
//		} while (checkPosOfFood(head, info) == true);
//		if (food == NULL)
//		{
//			NODE* p = new NODE;
//			p->info = info;
//			p->pNext = NULL;
//			p->pPrevious = NULL;
//			food = p;
//		}
//		else
//		{
//			while (checkPosOfFood(food, info) == true)
//			{
//				info = randomFOOD();
//			}
//			NODE* q = new NODE;
//			q->info = info;
//			q->pNext = NULL;
//			NODE* temp = food;
//			while (temp->pNext != NULL)
//			{
//				temp = temp->pNext;
//			}
//			temp->pNext = q;
//			q->pPrevious = temp;
//		}
//	}
//}
//NODE* findFOODtobeEaten(NODE* head, NODE* food)
//{
//	NODE* p = NULL;
//	while (food != NULL)
//	{
//		if (head->info.x == food->info.x && head->info.y == food->info.y)
//		{
//			p = food;
//		}
//		food = food->pNext;
//	}
//	return p;
//}
//void changeNODETobeEATEN(NODE* head, NODE* food, NODE* nodeFoodTobeEaten)
//{
//	TOADO info = randomFOOD();
//	while (checkPosOfFood(head, info) == true || checkPosOfFood(food, info) == true)
//	{
//		info = randomFOOD();
//	}
//	nodeFoodTobeEaten->info = info;
//}
//NODE* FindFOODtobeEaten(NODE* head, NODE* food)
//{
//
//	NODE* p = NULL;
//	while (food != NULL)
//	{
//		if (head->info.x == food->info.x && head->info.y == food->info.y)
//		{
//			p = food;
//		}
//		food = food->pNext;
//	}
//	return p;
//}
//void ChangeNODETobeEATEN(NODE* head, NODE* food, NODE* nodeFoodTobeEaten)
//{
//	TOADO info = randomFOOD();
//	while (checkPosOfFood(head, info) == true || checkPosOfFood(food, info) == true)
//	{
//		info = randomFOOD();
//	}
//	nodeFoodTobeEaten->info = info;
//}
//void InitializeFOOD(NODE*& food)
//{
//	food = NULL;
//}
