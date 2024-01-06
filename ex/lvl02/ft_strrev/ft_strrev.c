#include <stdio.h>

char    *ft_strrev(char *str)
{
	int i = 0;
	int len = 0;
	char swap;

	while(str[len])
		len++;
	len -= 1;
	while(i < len)
	{
		swap = str[i];
		str[i] = str[len];
		str[len] = swap;	
		i++;
		len--;
	}
	return(str);
}
/*int	main(void)
{
	char s[] = "Hello World";
	ft_strrev(s);
	printf("%s\n", s);
	return (0);
}*/