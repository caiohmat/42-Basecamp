#include <stdlib.h>

char	*ft_strdup(char	*src)
{
	char			*dest;
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
		counter++;
	dest = malloc(counter + 1);
	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
