#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void ft_writefile(char *s)
{
	int	fd;
	char *s1[1];

	fd = open(s, O_RDONLY);
	if (fd == -1)
		return;
	else
		printf("%ld\n", sizeof fd);
	while (read(fd, s1, 1))
		write(1, s1, 1);
	close(fd);
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		write(2, "File name missied.\n", 20);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 21);
	else
	{
		ft_writefile(argv[1]);
	}
}