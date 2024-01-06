#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int	gcd;
	int	org_a;
	int	org_b;

	gcd = 0;
	org_a = a;
	org_b = b;
	while (1)
	{
		if (a == 0)
			break;
		b %=a;
		if (b == 0)
			break;
		a %= b;
	}
	if(!b)
		gcd = a;
	else
		gcd = b;
	if(gcd)
		return(org_a / (gcd*org_b));
	else
		return(0);
}

int	main(void)
{
	printf("%d\n", lcm(122, 22));
	printf("%d\n", lcm(100, 10));
	printf("%d\n", lcm(4242, 42));
	printf("%d\n", lcm(5, 9));
	return (0);
}