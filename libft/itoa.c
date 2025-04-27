#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i;
	char	str[15];

	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
		write (1, "0", 1);
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i > 0)
		write (1, &str[--i], 1);
}

int	main(void)
{
    ft_putnbr(0);
	write (1, "\n", 1);
    ft_putnbr(123);
	write (1, "\n", 1);
    ft_putnbr(-500);
	write (1, "\n", 1);
    ft_putnbr(2147483647);
	write (1, "\n", 1);
    ft_putnbr(-2147483648);
}