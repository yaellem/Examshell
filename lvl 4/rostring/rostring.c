#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	rostring(char *str)
{
	int	i;
	int	x;
	char	*dst;
	char	*tmp;

	i = 0;
	x = 0;
	dst = malloc(sizeof(char) * ft_strlen(str) + 1);
	tmp = malloc(sizeof(char) * ft_strlen(str) + 1);
	str[ft_strlen(str) + 1] = '\0';
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		{
			while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
			{
				tmp[x] = str[i];
				x++;
				i++;
			}
			tmp[x] = ' ';
			x++;
		}
		i++;
	}
	tmp[x] = '\0';
	i = 0;
	while (tmp[i] != ' ' && tmp[i] != '\t' && tmp[i])
	{
		tmp[x] = tmp[i];
		x++;
		i++;
	}
	tmp[x] = '\0';
	x = 0;
	while (tmp[i])
		dst[x++] = tmp[++i];
	dst[x] = '\0';
	x = 0;
	while (dst[x])
	{
		ft_putchar(dst[x]);
		x++;
	}
	free(tmp);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putchar('\n');
	else
	{
		rostring(av[1]);
		ft_putchar('\n');
	}
	return (0);
}			
