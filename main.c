#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include "function.h"

#define SIZE 2
#pragma warning( disable : 4996)

int main()
{
	struct footballPlayers players[50];
	setlocale(LC_ALL, "Rus");
	char line[100] = "31212344";
	char line2[100] = "12";
	//printf("%s", putSpace(line));
	//printf("\n%s",myStrStr(line,line2));
	//printf("\n%s",myStrCpy(line,line2));
	//printf("\n%d", myStrLen(line));
	//printf("\n%s", myStrCut(line2,line));
	//printf("\n%d", myStrCmp(line, line2));

	FILE* file;
	fopen_s(&file, "structFP.txt", "r+");
	if (!file)
	{
		perror("f == NULL!");
		return 1;
	}
	//printf("%s\n", FGetLine(line, file));
	//printf("%s\n", line);
	writeStruct(file, players);
	fclose(file);
	return 0;
}
