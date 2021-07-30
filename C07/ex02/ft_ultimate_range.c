#include <stdlib.h>

int	ft_ultimate_range(int	**range, int	min,	int	max)
{
	unsigned int	counter;

	if (range == 0)
		return (-1);
	if (min < max)
	{
		*range = malloc((max - min) * sizeof(int));
		if (*range == 0)
			return (-1);
		counter = 0;
		while (min < max)
		{
			(*range)[counter] = min;
			counter++;
			min++;
		}
		return (counter);
	}
	return (0);
}
