#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void read_lines(int fd)
{
	char *line;

	while ((line = get_next_line(fd)))
	{
		printf("%s", line);
		free(line);
	}
}

int main(int ac, char **av)
{
	if (ac > 1)
	{
		int fd = open(av[1], O_RDONLY);
		read_lines(fd);
		close(fd);
	}
	else
		read_lines(0);
}
