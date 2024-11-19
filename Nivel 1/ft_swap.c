#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(void)
{
    int a;
    int b;

    a = 5;
    b = 10;
    printf("El valor de a es: %d\n", a);
    printf("El valor de b es: %d\n", b);
    ft_swap(&a, &b);
    printf("El nuevo valor de a es: %d\n", a);
    printf("El nuevo valor de a es: %d\n", b);
    return (0);
}