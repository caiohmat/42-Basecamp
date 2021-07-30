int	ft_strcmp(char	*s1, char	*s2)
{
	int	count;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] || s2[count] != '\0'))
	{
		count++;
	}
	return ((unsigned char) s1[count] - (unsigned char) s2[count]);
}
