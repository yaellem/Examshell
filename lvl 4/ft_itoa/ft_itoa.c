#include <stdlib.h>
#include <stdio.h>

int	ft_nbr(int nbr)
{
	int	i;

	i = 0;
	while ((nbr / 10) != 0)
	{
		i++;
		nbr = nbr / 10;
	}
	return (i + 1);
}

char	*ft_itoa(int nbr)
{
	int	i;
	int	x;
	int	a;
	int	b;
	char	*str;

	x = 0;
	i = ft_nbr(nbr);
	b = i;
	str = malloc(sizeof(char) * i + 1);
	
	if (nbr < 0)
	{
		i++;
		str[0] = '-';
		nbr *= -1;
	}
	str[i] = '\0';
	while (x < b)
	{
		a = nbr % 10;
		str[i - 1] = a + 48;
		i--;
		x++;
		nbr = nbr / 10;
	}
	return (str);
}

int	main()
{
	printf("%s\n", ft_itoa(2147483647));
	return (0);
}			
