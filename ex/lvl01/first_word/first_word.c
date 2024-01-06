#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if(argc == 2)
	{
		while(!((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z')))
		{
			i++;
		}
		j = i;
		while(((argv[1][i] >= 'a' && argv[1][i] <= 'z') || (argv[1][i] >= 'A' && argv[1][i] <= 'Z')) || argv[1][i] != 32)
		{
			i++;
		}
		while(j < i)
		{
			write(1, &argv[1][j], 1);
			j++;
		}

	}
	write(1, "\n", 1);
}