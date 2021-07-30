#include <stdlib.h>

unsigned int	ft_size(int size, char	**strs, char	*sep)
{
	unsigned int	fsize;
	int				counter1;
	unsigned int	counter2;

	if (size < 1)
		return (1);
	fsize = 0;
	counter1 = 0;
	while (counter1 < size)
	{
		counter2 = 0;
		while (strs[counter1][counter2] != '\0')
		{
			fsize++;
			counter2++;
		}
		counter1++;
	}
	counter1 = 0;
	while (sep[counter1] != '\0')
		counter1++;
	return (fsize + ((size - 1) * counter1) + 1);
}

char	*ft_strjoin(int	size, char	**strs, char	*sep)
{
	char			*dest;
	int				counter1;
	unsigned int	counter2;
	unsigned int	counter3;

	dest = malloc(ft_size(size, strs, sep));
	if (dest == NULL)
		return (NULL);
	counter1 = 0;
	counter3 = 0;
	while (counter1 < size)
	{
		counter2 = 0;
		while (strs[counter1][counter2] != '\0')
			dest[counter3++] = strs[counter1][counter2++];
		if (counter1 < size - 1)
		{
			counter2 = 0;
			while (sep[counter2] != '\0')
				dest[counter3++] = sep[counter2++];
		}
		counter1++;
	}
	dest[counter3] = '\0';
	return (dest);
}
