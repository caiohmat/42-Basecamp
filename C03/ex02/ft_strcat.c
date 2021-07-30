char	*ft_strcat(char	*dest, char	*src)
{
	unsigned int	c1;
	unsigned int	c2;

	c1 = 0;
	while (dest[c1] != '\0')
		c1++;
	c2 = 0;
	while (src[c2] != '\0')
	{
		dest[c1] = src[c2];
		c1++;
		c2++;
	}
	dest[c1] = '\0';
	return (dest);
}
