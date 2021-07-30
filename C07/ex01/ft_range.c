#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int				*matrix;
	unsigned int	counter;

	if (min < max)
	{
		matrix = malloc((max - min) * sizeof(int));
		counter = 0;
		while (min < max)
		{
			matrix[counter] = min;
			counter++;
			min++;
		}
		return (matrix);
	}
	return (0);
}
