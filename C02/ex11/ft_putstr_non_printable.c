#include<unistd.h>

void	ft_hex(int	x)
{
	int	n1;
	int	n2;

	n1 = x / 16;
	n2 = x % 16;
	if (n1 <= 9)
	{
		n1 = n1 + 48;
		write(1, &n1, 1);
	}
	else
	{
		n1 = n1 + 87;
		write(1, &n1, 1);
	}	
	if (n2 <= 9)
	{
		n2 = n2 + 48;
		write(1, &n2, 1);
	}
	else
	{
		n2 = n2 + 87;
		write(1, &n2, 1);
	}	
}

void	ft_putstr_non_printable(char	*str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] >= ' ' && str[counter] <= '~')
		{
			write(1, &str[counter], 1);
		}
		else
		{	
			if (str[counter] >= 0)
			{
				write(1, "\\", 1);
				ft_hex(str[counter]);
			}
			else
			{
				write(1, "\\", 1);
				ft_hex(str[counter] + 256);
			}
		}
		counter++;
	}
}
