int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (s1[c] != '\0' || s2[c] != '\0') && (c < n - 1))
	{
		c++;
	}
	return ((unsigned char) s1[c] - (unsigned char) s2[c]);
}
