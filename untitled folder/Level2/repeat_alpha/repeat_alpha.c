#include <unistd.h>

int	repeat_alpha(char c)
{
	int repeat;

	if (c >= 'A' && 'Z' >= c)
	{
		repeat = c - 'A' + 1;
	}
	else if(c >= 'a' && 'z' >= c)
	{
		repeat = c - 'a' + 1;
	}
	else
	{
		repeat = (1);
	}
	return(repeat);
}

int		main(int argc, char** argv)
{
	int repeat;

	if (argc == 2)
	{
		while (*argv[1])
		{
			repeat = repeat_alpha(*argv[1]);
			while (repeat--)
			{
				write(1, argv[1], 1);
			}
			argv[1]++;
		}
	}
	write(1, "\n", 1);
}
