#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len = 0;
	int *arr;
	
	if(start > end)
		len = start -end;
	else
		len = end - start;
	arr = (int*) malloc(len * sizeof(int) + 1);
	if(!arr)
		return(0);
	while(len > 0)
	{
		if(start > end)
			arr[len] = start++;
		else
			arr[len] = start--;
		len--;
	}
	return(arr);
}

int main(void)
{
	int i;
	int *prt;

	i = 0;
	prt = ft_rrange(1, 3);
	while(i <= 2)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(-1, 2);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, 0);
	while(i <= 0)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	i = 0;
	prt = ft_rrange(0, -3);
	while(i <= 3)
	{
		printf("%d ", prt[i]);
		i++;
	}
	printf("\n");

	return (0);
}