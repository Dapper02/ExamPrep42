#include <unistd.h>

int main(int argc, char** argv)
{
	int i;
	int res;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				res = argv[1][i] + 32;
				write(1, &res, 1);
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				res = argv[1][i] - 32;
				write(1, &res, 1);
			}
			else
			{
				res = argv[1][i];
				write(1, &res, 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
