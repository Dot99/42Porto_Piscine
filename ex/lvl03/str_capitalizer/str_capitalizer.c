#include <unistd.h>

void str_capitalizer(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if((str[i -1] == 32 || str[i-1] <= 13) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		if(str[0] >= 'a' && str[0] <= 'z')
			str[0] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while (i < argc)
		{
			str_capitalizer(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}