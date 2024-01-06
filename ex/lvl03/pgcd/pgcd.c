#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	while(str[i] == 32 || str[i] <= 13)
		i++;
	while(str[i] == 45 || str[i] == 43)
	{
		if(str[i] == 45)
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return(result * sign);
}


int main(int argc, char **argv)
{
	int nbr1 = ft_atoi(argv[1]);
	int nbr2 = ft_atoi(argv[2]);

	if(argc == 3)
	{
		if(nbr1 > 0 && nbr2 > 0)
		{
			while(nbr1 != nbr2)
			{
				if(nbr1 > nbr2)
					nbr1 -= nbr2;
				else
					nbr2 -= nbr1;
			}
		}
		printf("%d", nbr1);
	}
	printf("%s", "\n");
	return(0);
}