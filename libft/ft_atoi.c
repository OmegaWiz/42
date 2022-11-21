int ft_atoi(char *nptr)
{
	int		neg;
	long	num;
	int		i;

	neg = 0;
	num = 0;
	i = 0;
	while (nptr[i] == ' ')
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			neg++;
		i++;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		num *= 10;
		num += (nptr[i] - '0');
		i++;
	}
	if (neg % 2)
		num *= -1;
	return (num);
}
