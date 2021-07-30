char	*ft_cond(char	*str, char	*to_find, int	c1, int	c2)
{
	int	c3;

	while (str[c1] != '\0')
	{
		c2 = 0;
		c3 = c1;
		while (to_find[c2] == str[c3] && str[c3] != '\0'
			&& to_find[c2] != '\0')
		{
			c2++;
			c3++;
		}
		if (to_find[c2] == '\0')
			return (&str[c1]);
		c1++;
	}
	return (0);
}

char	*ft_strstr(char	*str, char	*to_find)
{
	if (to_find[0] == '\0')
		return (str);
	else
		return (ft_cond(str, to_find, 0, 0));
}
