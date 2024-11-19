#include <unistd.h>

char    *ft_strcpy(char *dst, char const *src)
{
    int i;

    i = 0;
    while (src[i])
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (dst);
}

#include <stdio.h>
int main(int ac, char **av)
{
    char    dst[50];

    if (ac != 2)
    {
        printf("Por favor introduzca los argumentos necesarios");
        return 0;
    }
    printf("%s\n", ft_strcpy(dst, av[1]));
    printf("%s\n", dst);
    return 0;
}