#include<unistd.h>

int	main(int argc, char	**argv)
{
	int	counter1;
	int	counter2;

	if (argc >= 2)
	{
		counter1 = 0;
		while (argv[counter1] != '\0')
			counter1++;
		counter1--;
		while (counter1 >= 1)
		{
			counter2 = 0;
			while (argv[counter1][counter2] != '\0')
			{
				write(1, &argv[counter1][counter2], 1);
				counter2++;
			}
			write(1, "\n", 1);
			counter1--;
		}
	}
	return (0);
}
