int	ft_atoi(char *str)
{
	int	sign = 1;
	int	res = 0;
	int	i = 0;

	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0'||( str[i] >= '0' && str[i] <= '9'))
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
void	ft_putnbr(int num)
{
	char	c;
	if (num > 9)
		ft_putnbr(num / 10);
	c = num % 10 + '0';
	write(1, &c, 1);
}

int	ft_is_prime(int num)
{
	int check = 2;

	if (num <= 0)
		return (0);
	while (check <= num)
	{
		if (num % check == 0)
			return (0);
		else
			check++;
	}
	return (1);
}

int	ft_add_prime_sum(int num)
{
	int i = 2;
	int sum = 0;

	if (num <= 0)
		return (0);
	while(i <= num)
	{
		if (ft_is_prime(i) == 1)
			sum = sum + i;
		i++;
	}
	return (sum);
}

