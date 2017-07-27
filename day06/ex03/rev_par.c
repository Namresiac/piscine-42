#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	(void)argc;
	while (argv[i] != '\0')
	{
		j = 0;
		if (argv[i][j] == 'z')
		{
			ft_putchar('z');
			ft_putchar('\n');
			i++;
		}
		else
			ft_putchar('\n');
	i++;
	}
	return (0);
}
