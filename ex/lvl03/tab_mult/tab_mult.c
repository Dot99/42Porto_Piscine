#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

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

void ft_putnbr(int nb)
{
	if(nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		write(1, "147483648", 9);
	}
	else
	{
		if(nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
			ft_putnbr(nb);
		}
		else if(nb <= 9)
		{
			ft_putchar(nb + '0');
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

void tab_mult(int nb, char *str)
{
	int nbr = ft_atoi(str);
	int result = nb * nbr;
	ft_putnbr(nb);
	write(1, " * ", 3);
	ft_putnbr(nbr);
	write(1, " = ", 3);
	ft_putnbr(result);
	write(1, "\n", 1);

}

int main(int argc, char **argv)
{
	int i = 1;

	if(argc == 2)
	{
		while(i < 10)
		{
			tab_mult(i, argv[1]);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}