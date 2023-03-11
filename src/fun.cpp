// Copyright 2022 UNN-IASR
#include "fun.h"
#include <ctype.h>
#include <cstring>

unsigned int faStr1(const char* str) {
	int count = 0;
	bool isWord = false, space = true;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isspace(str[i]))
		{
			space = true;
			if (isWord) count++;
			isWord = false;
		}
		else
		{
			if ((space && !isdigit(str[i])) || (isWord && !isdigit(str[i])))
				isWord = true;
			if (isdigit(str[i])) isWord = false;
			space = false;
		}
	}
	if (isWord) count++;
	return count;
}

unsigned int faStr2(const char* str) {
	int count = 0;
	bool isWord = false, space = true;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isspace(str[i]))
		{
			space = true;
			if (isWord) count++;
			isWord = false;
		}
		else
		{
			if (space && isupper(str[i]) && !isdigit(str[i])) isWord = true;
			else
				if (isWord && isupper(str[i]) || isWord && isdigit(str[i])) isWord = false;
			space = false;
		}
	}
	if (isWord) count++;
	return count;
}

unsigned int faStr3(const char* str) {
	int countWord = 0, count = 0;
	bool isWord = false, space = true;
	for (int i = 0; i < strlen(str); i++)
	{
		if (isspace(str[i]))
		{
			space = true;
			if (isWord) countWord++;
			isWord = false;
		}
		else
		{
			count++;
			isWord = true;
		}
	}
	return (count + countWord / 2) / countWord;
	//return round((float)(count / countWord));
}
