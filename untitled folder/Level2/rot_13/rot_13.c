#include <unistd.h>

int main(int argc, char** argv)
{
	int res;
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 'A' && argv[1][i] <= 'M') || (argv[1][i] >= 'a' && argv[1][i] <= 'm'))
			{
				res = argv[1][i] + 13;
				write(1, &res, 1);
			}
			else if ((argv[1][i] >= 'N' && argv[1][i] <= 'Z') || (argv[1][i] >= 'n' && argv[1][i] <= 'z'))
			{
				res = argv[1][i] - 13;
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
