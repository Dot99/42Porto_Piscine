#include <unistd.h>

void arr_sum(int *arr, int nbr)
{
	int i = 1;
	int temp = arr[0];
	while(arr[i])
	{
		if((temp + arr[i]) == nbr)
		{
			write(1, &temp, 1);
			write(1, " ", 1);
			write(1, &arr[i], 1);
			break;
		}
		i++;
	}
}

int main(void)
{
	int arr[] = {1, 2, 3, 5, 8};
	int nb = 11;
	arr_sum(arr, nb);
	return(0);
}