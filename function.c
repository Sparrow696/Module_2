#include "function.h"
#include <math.h>
#include <stdio.h>

char* FGetLine(char* line_, FILE* f_)
{
	char* lineCopy = line_;
	if (f_ == NULL)
	{
		perror("f_ == NULL!\n");
		return 0;
	}

	while (1)
	{
		char c = fgetc(f_);
		if (c == '\n' || c == EOF)
			break;
		else
		{
			*lineCopy = c;
			lineCopy++;
		}

	}
	*lineCopy = '\0';

	return line_;
}

char* myStrCpy(char* fLine_, char* sLine_)
{
	for (int i = 0; fLine_[i] != '\0'; i++)
	{
		sLine_[i] = fLine_[i];
	}
	return sLine_;
}

int myStrLen(char* line_)
{
	int s = 0;
	while (line_[s] != '\0')
	{
		s++;
	}
	return s;
}

char* myStrCut(char* fLine_, char* sLine_)
{
	int i = 0;
	int j = 0;
	while (sLine_[j] != '\0')
	{
		if (fLine_[i] == '\0')
		{
			while (sLine_[j] != '\0')
			{
				fLine_[i] = sLine_[j];
				j++;
				i++;
			}
		}
		i++;
	}
	return fLine_;
}

int myStrCmp(char* fLine_, char* sLine_)
{
	int i = 0;
	for (i; fLine_[i] == sLine_[i]; i++)
	{
		if (fLine_[i] == '\0')
		{
			return 0;
		}
	}
	return fLine_[i] - sLine_[i];
}

char* myStrStr(char* fLine_, char* sLine_)
{
	int i = 0;
	while (*fLine_ != '\0')
	{
		if (*sLine_ == '\0')
		{
			return fLine_;
		}
		const char* p1 = fLine_;
		const char* p2 = sLine_;
		while (*p1 == *p2 && *p2 != '\0')
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return fLine_;
		}
		++fLine_;
	}
	return NULL;
}

char* putSpace(char* line_)
{
	if (!line_)
	{
		perror("");
		return 0;
	}
	int n = strlen(line_);
	int size = malloc(sizeof(strlen(line_) * 2));
	char* trust = size;
	for (int i = 0; i < n; i++)
	{
		trust[i * 2] = line_[i];
		trust[i * 2 + 1] = ' ';
	}
	//trust[size - 1] = '\0'; не работает
	return trust;
}

void writeStruct(FILE* f_, struct footballPlayers* players_)
{
	char* surname = "123";
	char* day = "123";
	char* month = "123";
	char* year = "123";
	char* role = "";
	char* pob = "";
	surname = FGetLine(surname, f_);
	day = FGetLine(day, f_);
	month = FGetLine(month, f_);
	year = FGetLine(year, f_);
	role = FGetLine(role, f_);
	pob = FGetLine(pob, f_);

	//players_[1].surname = surname;
	//printf(name);
}


