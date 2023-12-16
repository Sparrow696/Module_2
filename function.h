#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef _FUNCTION_H_
#define _FUNCTION_H_

/*
* @brief Считывает строку из файла.
* @param line_ : строка куда считываем.
* @param f_ : файл откуда считывать строку.
* @return кол-во считываемых символов.
*/
int FGetLine(char* line_, FILE* f_);

/*
* @brief копирует fLine_ в sLine_
* @param fLine_ : что копируем
* @param sLine_ : куда вставить
* @return готовая строка
*/
char* myStrCpy(char* fLine_, char* sLine_);

/*
* @brief считает количество символов в строке
* @param line_ : в какой строке считать
* @return количество символов
*/
int myStrLen(char* line_);

/*
* @brief добавляет sLine в fLine
* @param fLine_ : куда добавить
* @param sLine_ : что добавить
* @return готовая строка
*/
char* myStrCut(char* fLine_, char* sLine_);

/*
* @brief посимвольно сравнивает строки
* @param fLine_ : первая строка
* @param sLine_ : вторая
* @return результат
*/
int myStrCmp(char* fLine_, char* sLine_);

/*
* @brief ищет подстроку
* @param fLine_ : где искать
* @param sLine_ : что искать
* @return готовая строка
*/
char* myStrStr(char* fLine_, char* sLine_);

/*
* @brief разделяет каждый символ пробелом
* @param line_ : строка
* @return готовая строка
*/
char* putSpace(char* line_);
#endif // !_FUNCTION_H_

