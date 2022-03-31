#include <stdio.h>

int	ft_x(char *s)
{
	if (s[0] == 'a')
		return (1);
	else
		return (0);
}

int	ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}

int	main()
{
	char *arr[5] = {"ahsjk", "aslasf", "aslkkjfd", "jklsan", 0};

	printf("\n%d\n", ft_count_if(arr, ft_x));
}