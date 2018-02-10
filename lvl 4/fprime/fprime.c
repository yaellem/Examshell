#include <stdio.h>
#include <stdlib.h>

int	fprime(char *str)
{
	int	x;
	int	i;
	int	y;
	
	y = 0;
	i = 2;
	x = atoi(str);
	if (x == 1)
	{
		printf("%d", x);
		return (0);
	}
	else
	{
		while (i <= x)
		{
			while ((x % i) == 0)
			{
				if (y == 1)
					printf("%c", '*');
				printf("%d", i);
				y = 1;
				x = x / i;
			}
			i++;
		}
	}
	return (0);	
}

int	main(int ac, char **av)
{
	if (ac != 2)
		printf("\n");
	else
	{
		fprime(av[1]);
		printf("\n");
	}
	return (0);
}
