#include <iostream>

int main(int argc, char **argv)
{
	int	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != 0)
		{
			if (argv[1][i] > 96 && argv[1][i] < 123)
				argv[1][i] -= 32;
			i++;
		}
		std::cout << argv[1] << "\n";
	}
	return (0);
}
