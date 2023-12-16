#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "function.h"

#define SIZE 2
#pragma warning( disable : 4996)
struct date {
	int day;
	int month;
	int year;
};

struct footballPlayers {
	char* surname;
	struct date DoB;
	char* role;
	int amountGame;
	char* PoB;
}; struct footballPlayers players[];

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[100] = "31212344";
	char line2[100] = "12";
	//printf("%s", putSpace(line));
	//printf("\n%s",myStrStr(line,line2));
	//printf("\n%s",myStrCpy(line,line2));
	//printf("\n%d", myStrLen(line));
	//printf("\n%s", myStrCut(line2,line));
	//printf("\n%d", myStrCmp(line, line2));

	//FILE* file;
	//fopen_s(&file, "file.txt", "r");
	//if (!file)
	//{
	//	perror("f == NULL!");
	//	return 1;
	//}
	//printf("%d\n", FGetLine(line, file));
	//printf("%s\n", line);
	//fclose(file);
	return 0;
}
