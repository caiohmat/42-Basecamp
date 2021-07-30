char	*ft_strcapitalize(char	*str)
{
	int	c;
	int	x;

	c = 0;
	x = 0;
	while (str[c] != '\0')
	{
		if ((x == 0) && (str[c] >= 'a' && str[c] <= 'z'))
		{
			str[c] = str[c] - 32;
			x++;
		}
		else if (x > 0 && (str[c] >= 'A' && str[c] <= 'Z'))
			str[c] = str[c] + 32;
		else if ((str[c] < '0') || (str[c] > '9' && str[c] < 'A')
			|| (str[c] > 'Z' && str[c] < 'a') || (str[c] > 'z'))
			x = 0;
		else
			x++;
		c++;
	}
	return (str);
}
