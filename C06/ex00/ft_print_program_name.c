#include<unistd.h>

int	main(int	argc, char	**argv)
{
	int	counter;

	counter = 0;
	if (argc > 0)
	{
		while (argv[0][counter] != '\0')
		{
			write(1, &argv[0][counter], 1);
			counter++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
