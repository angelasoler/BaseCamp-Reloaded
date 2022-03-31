#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void ft_writefile(char *s)
{
	int	fd;
	char s1[100];

	fd = open(s, O_RDONLY);
	if (fd == -1)
		exit(1);
	else
		printf("%ld\n", sizeof fd);
	read(fd, s1, 100);
	printf("\n%s\n\n", s1);
	close(fd);
}

int	main(int argc, char *argv[])
{
	// int fd;

	if (argc == 1)
		write(1, "File name missied.\n", 20);
	else if (argc > 2)
		write(1, "Too many arguments.\n", 21);
	else
	{
		ft_writefile(argv[1]);
		// fd = open(argv[1], O_RDONLY)
		// if (fd == -1)
		// 	return(0);
		// write(1, argv[1], 1);
	}
}