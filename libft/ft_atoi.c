int ft_atoi(char *str)
{
	int		neg;
	long	num;
	int		i;

	neg = 0;
	num = 0;
	i = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg++;
		i++;
	}
	while ('0' <= str[i] && str[i] <= '9')
	{
		num *= 10;
		num += (str[i] - '0');
		i++;
	}
	if (neg % 2)
		num *= -1;
	return (num);
}
