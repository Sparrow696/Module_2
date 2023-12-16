#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*
* @brief ��������� ������ �� �����.
* @param line_ : ������ ���� ���������.
* @param f_ : ���� ������ ��������� ������.
* @return ���-�� ����������� ��������.
*/
int FGetLine(char* line_, FILE* f_);

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
#endif // !_FUNCTION_H_

