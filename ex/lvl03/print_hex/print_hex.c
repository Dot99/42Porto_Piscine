#include <unistd.h>

int ft_atoi(char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;
	while((str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while(str[i] == 45 || str[i] == 43)
	{
		if(str[i] == 45)
			sign *= -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += (str[i] - '0');
		i++;
	}
	return(result * sign);
}
void print_hex(char *str)
{
	int nb = ft_atoi(str);
	char *strhex;
	strhex = "0123456789abcdef";
	if(nb == 0)
		write(1, &nb, 1);
	else
	{
		while(nb)
		{
			write(1, &strhex[nb % 16], 1);
			nb /= 16;
		}
	}
}

int main(int argc, char **argv)
{
	if(argc == 2)
	{
		print_hex(argv[1]);
	}
	write(1, "\n", 1);
	return(0);
}