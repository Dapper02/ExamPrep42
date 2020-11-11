int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

#include <stdio.h>

int main()
{
	int res;

	res = ft_strlen("char");
	printf("%d", res);
}
