#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "brainfuck.h"

int brainfuck_end_while(char *str, char *arr, int i)
{
	int count;
	count = 1;
	if(*arr != 0)
	{
		i--;
		while(count != 0)
		{
			if(str[i] == '[')
				count--;
			if(str[i] == ']')
				count++;
			i--;
		}
	}
	return(i);
}

int brainfuck_start_while(char *str, char *arr, int i)
{
	int count;
	count = 1;
	if(*arr == 0)
	{
		i++;
		while(count != 0)
		{
			if(str[i] == '[')
				count++;
			if(str[i] == ']')
				count--;
			i++;
		}
	}
	return(i);
}

void brainfuck(char *str)
{
	char *arr;
	int i = 0;
	arr = (char *)malloc(2048 * sizeof(char) + 1);
	while(str[i])
	{
		if(str[i] == '>')
			arr++;
		else if(str[i] == '<')
			arr--;
		else if(str[i] == '+')
			(*arr)++;
		else if(str[i] == '-')
			(*arr)--;
		else if(str[i] == '.')
			write(1, arr, 1);
		else if(str[i] == '[')
			i = brainfuck_start_while(str, arr, i);
		else if(str[i] == ']')
			i = brainfuck_end_while(str, arr, i);

		i++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
		brainfuck(argv[1]);
	else
		write(1, "\n", 1);
	return(0);
}