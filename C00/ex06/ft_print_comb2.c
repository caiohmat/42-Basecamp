#include<unistd.h>

void	printing_function(char number)
{
	write (1, &number, 1);
}

void	ft_print_comb2(void)
{
	int	numbers1;
	int	numbers2;

	numbers1 = 0;
	while (numbers1 <= 99)
	{
		numbers2 = numbers1 + 1;
		while (numbers2 <= 99)
		{
			printing_function (numbers1 / 10 + 48);
			printing_function (numbers1 % 10 + 48);
			printing_function (' ');
			printing_function (numbers2 / 10 + 48);
			printing_function (numbers2 % 10 + 48);
			if ((numbers1 / 10 != 9) || (numbers1 % 10 != 8))
			{
				printing_function (',');
				printing_function (' ');
			}
			numbers2++;
		}
		numbers1++;
	}
}
