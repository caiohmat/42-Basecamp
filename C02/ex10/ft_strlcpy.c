unsigned int	ft_strlcpy(char	*dest, char	*src, unsigned int	size)

{
	unsigned int	counter;
	unsigned int	lenght;

	lenght = 0;
	while (src[lenght] != '\0')
		lenght++;
	counter = 0;
	if (size > 0)
	{
		while ((src[counter] != '\0') && (counter < (size - 1)))
		{
			dest[counter] = src[counter];
			counter++;
		}
		dest[counter] = '\0';
	}
	return (lenght);
}
