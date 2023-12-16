#include "function.h"
#include <math.h>
#include <stdio.h>

int FGetLine(char* line_, FILE* f_)
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

	return strlen(line_);
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
	char* trust = malloc(sizeof(char*));
	int n = myStrLen(line_);
	for (int i = 0; i < n; i++)
	{
		trust[i * 2] = line_[i];
		trust[i * 2 + 1] = ' ';
	}
	return trust;
}
