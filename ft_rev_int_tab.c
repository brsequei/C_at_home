void ft_rev_int_tab (int *tab, int size)
{

int i=0;
int h=size-1; // inicializado a size - 1 pois o array começa no 0, ex se tiver 10 nao conseguimos tocar na 10ª posição
int temp;

while (i < size /2 ) // o codigo troca o primeiro com o segundo, se fosse i<size ele ia trocar tudo 2 vezes ou seja voltar ao mesmo
{
    temp = tab[i];
    tab[i] = tab[h];
    tab[h] = temp;
    i++;
    h--;
}
}