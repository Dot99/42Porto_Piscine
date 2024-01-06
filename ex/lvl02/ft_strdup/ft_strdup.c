#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return(i);
}

char	*ft_strdup(char *str)
{
	int i = 0;
	char *arr;

	arr = ((char *)malloc(ft_strlen(str) * sizeof(char) + 1));
	if(!arr)
		return(NULL);
	while(str[i])
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return(arr);
}

/*int		main(void)
{
	char	*str;
	char	*allocated;

	str = "Hello World with malloc()";
	printf("original  : base  : $%s$ @ %p\n", str, str);
	allocated = ft_strdup(str);
	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
}*/