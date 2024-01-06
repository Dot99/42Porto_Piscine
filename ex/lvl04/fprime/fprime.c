#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

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

int	main(int argc, char **argv)
{
	int	i;
	int	nbr;

	if (argc == 2)
	{
		i = 2;
		nbr = ft_atoi(argv[1]);
		if (nbr == 1)
			write(1, "1", 1);
		while (nbr >= i)
		{
			if (nbr % i == 0)
			{
				ft_putnbr(i);
				if (nbr == i)
					break ;
				write(1, "*", 1);
				nbr /= i;
				i = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}