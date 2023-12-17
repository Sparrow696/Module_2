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
* @brief —читывает строку из файла.
* @param line_ : строка куда считываем.
* @param f_ : файл откуда считывать строку.
* @return кол-во считываемых символов.
*/
char* FGetLine(char* line_, FILE* f_);

/*
* @brief копирует fLine_ в sLine_
* @param fLine_ : что копируем
* @param sLine_ : куда вставить
* @return готова€ строка
*/
char* myStrCpy(char* fLine_, char* sLine_);

/*
* @brief считает количество символов в строке
* @param line_ : в какой строке считать
* @return количество символов
*/
int myStrLen(char* line_);

/*
* @brief добавл€ет sLine в fLine
* @param fLine_ : куда добавить
* @param sLine_ : что добавить
* @return готова€ строка
*/
char* myStrCut(char* fLine_, char* sLine_);

/*
* @brief посимвольно сравнивает строки
* @param fLine_ : перва€ строка
* @param sLine_ : втора€
* @return результат
*/
int myStrCmp(char* fLine_, char* sLine_);

/*
* @brief ищет подстроку
* @param fLine_ : где искать
* @param sLine_ : что искать
* @return готова€ строка
*/
char* myStrStr(char* fLine_, char* sLine_);

/*
* @brief раздел€ет каждый символ пробелом
* @param line_ : строка
* @return готова€ строка
*/
char* putSpace(char* line_);

/*
* @brief —читывает структуру из файла.
* @param f_ : файл откуда считывать.
* @param players : структура.
* @return кол-во считываемых символов.
*/
void writeStruct(FILE* f, struct footballPlayers *players_);
#endif // !_FUNCTION_H_

