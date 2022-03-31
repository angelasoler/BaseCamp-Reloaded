#include <stdio.h>
void	duplicate(int n)
{
	n *= 2;
	printf("%d\n", n);
}

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

int	main()
{
	int x = 5;
	int tab[5] = {0, 1, 2, 3, 4};
	int i =0;

	ft_foreach(tab, 5, duplicate);
	while (i < x)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}