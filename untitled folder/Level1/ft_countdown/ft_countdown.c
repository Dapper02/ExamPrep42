#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 9;
	while(i > -1)
	{
		ft_putchar(i + '0');
		i--;
	}
}
