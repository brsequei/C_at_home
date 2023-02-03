void ft_rev_int_tab (int *tab, int size)
{

int i;
i=size;
int h;
h=0;
int tab_temp;
tab_temp = calloc(10, sizeof(int));
int  *ptr=tab;

while (i > 0)
{
    tab_temp[h] = tab[i];
    i--;
    h++;
}
}


#include <stdio.h>
#include <stdlib.h>


int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(10, sizeof(int));
	counter = 0;
	while (counter < 10)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 10);
	counter = 0;
	while (counter < 10)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}