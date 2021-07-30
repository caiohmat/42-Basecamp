#include<unistd.h>

void	ft_print(char printnumbr)
{
	write(1, &printnumbr, 1);
}

void	ft_putnbr(int nb)
{
	int	number;

	if (nb == -2147483648)
	{
		ft_print('-');
		ft_print('2');
		ft_putnbr(147483648);
		return ;
	}
	if (nb >= 0)
		number = nb;
	else
	{
		ft_print('-');
		number = nb * -1;
	}
	if (number >= 10)
	{
		ft_putnbr(number / 10);
		ft_print(number % 10 + 48);
	}
	else
		ft_print(number + 48);
}
