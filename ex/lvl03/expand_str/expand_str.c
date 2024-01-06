#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int len = 0;
	if(argc == 2)
	{
		while(argv[1][len])
		{
			len++;
		}
		while(argv[1][i] == 32 || argv[1][i] <= 13)
			i++;
		while(argv[1][len] == 32 || argv[1][len] <= 13)
			len--;
		while(i < len + 1)
		{
			if((argv[1][i] == 32 || argv[1][i] <= 13))
			{
				while(argv[1][i] == 32 || argv[1][i] <= 13)
					if(argv[1][i+1] == 32 || argv[1][i] <= 13)
						i++;
					else
						break;				
			}
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
