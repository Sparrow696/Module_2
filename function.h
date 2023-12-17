#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

struct footballPlayers {
	char* surname;
	int dob_day;
	int dob_month;
	int dob_year;
	char* role;
	int amountGame;
	char* PoB;
};

/*
* @brief ��������� ������ �� �����.
* @param line_ : ������ ���� ���������.
* @param f_ : ���� ������ ��������� ������.
* @return ���-�� ����������� ��������.
*/
char* FGetLine(char* line_, FILE* f_);

/*
* @brief �������� fLine_ � sLine_
* @param fLine_ : ��� ��������
* @param sLine_ : ���� ��������
* @return ������� ������
*/
char* myStrCpy(char* fLine_, char* sLine_);

/*
* @brief ������� ���������� �������� � ������
* @param line_ : � ����� ������ �������
* @return ���������� ��������
*/
int myStrLen(char* line_);

/*
* @brief ��������� sLine � fLine
* @param fLine_ : ���� ��������
* @param sLine_ : ��� ��������
* @return ������� ������
*/
char* myStrCut(char* fLine_, char* sLine_);

/*
* @brief ����������� ���������� ������
* @param fLine_ : ������ ������
* @param sLine_ : ������
* @return ���������
*/
int myStrCmp(char* fLine_, char* sLine_);

/*
* @brief ���� ���������
* @param fLine_ : ��� ������
* @param sLine_ : ��� ������
* @return ������� ������
*/
char* myStrStr(char* fLine_, char* sLine_);

/*
* @brief ��������� ������ ������ ��������
* @param line_ : ������
* @return ������� ������
*/
char* putSpace(char* line_);

/*
* @brief ��������� ��������� �� �����.
* @param f_ : ���� ������ ���������.
* @param players : ���������.
* @return ���-�� ����������� ��������.
*/
void writeStruct(FILE* f, struct footballPlayers *players_);
#endif // !_FUNCTION_H_

