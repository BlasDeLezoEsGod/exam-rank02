
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

#include <stdio.h>
int main(int ac, char **av)
{
    int i;

    i = 1;
    if (ac == 1)
        printf("Por favor, inserte al menos un argumento.");
    while (av[i])
    {
        printf("La longitud de la palabra %s es de: %d\n", av[i], ft_strlen(av[i]));
        i++;
    }
    return (0);
}