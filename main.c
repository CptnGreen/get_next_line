#include "get_next_line.h"

int     main(int argc, char **argv)
{
	int const		fd;
	char			**line;
	int				res;
	
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		while (res = get_next_line(fd, line))
			printf(*line);
		if (res == -1)
			printf("Error reading from file!\n");
		else
			printf("Reached end of file!\n");	
	}
	return (0);
}