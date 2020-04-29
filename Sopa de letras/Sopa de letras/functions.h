#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>
#include <locale.h>
#include <iostream>
#include <string>

#define MY_COLOR_BLACK			0
#define MY_COLOR_DARK_BLUE		1
#define MY_COLOR_SOFT_GREEN		2
#define MY_COLOR_SOFT_BLUE		3
#define MY_COLOR_DARK_RED		4
#define MY_COLOR_PURPLE			5
#define MY_COLOR_DARK_YELLOW	6
#define MY_COLOR_GRAY			7
#define MY_COLOR_DARK_GRAY		8
#define MY_COLOR_CYAN			9
#define MY_COLOR_LIGTH_GREEN	10
#define MY_COLOR_LIGTH_BLUE		11
#define MY_COLOR_LIGTH_RED		12
#define MY_COLOR_PINK			13
#define MY_COLOR_LIGTH_YELLOW	14
#define MY_COLOR_WHITE			15

using namespace std;

void setColor(int foreGround, int backGround);
void setForeColor(int foreGround);
void setBackColor(int backGround);
void resetColor();
void gotoxy(int x, int y);
void showRectAt(int x, int y, int width, int height);
void show90RectAt(int x, int y, int width, int height);
void showCharAt(int x, int y, char c);
void showVerticalWordAt(int x, int y, string s);
void printfAt(int x, int y, string s);
void PreventLoop(void);