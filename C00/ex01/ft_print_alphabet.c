#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter;

	letter = 97;
	while (letter <= 122)
	{
		write (1, &letter, 1);
		letter++;
	}
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}


int    main(void)
{
    ft_print_reverse_alphabet();
    return (0);
}