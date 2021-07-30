#include<unistd.h>

void	printing_function(char hundred1, char ten1, char one1)
{
	write (1, &hundred1, 1);
	write (1, &ten1, 1);
	write (1, &one1, 1);
	if (hundred1 < 55)
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	hundred;
	char	ten;
	char	one;

	hundred = 48;
	while (hundred <= 55)
	{
		ten = hundred + 1;
		while (ten <= 56)
		{
			one = ten + 1;
			while (one <= 57)
			{
				if ((ten > hundred) && (one > ten))
				{
					printing_function(hundred, ten, one);
				}
				one++;
			}	
			ten++;
		}
		hundred++;
	}
}
