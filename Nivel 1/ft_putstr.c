#include <unistd.h>

void    ft_putchar(int  c)
{
    write(1, &c, 1);
}

void    ft_putstr(char  *s)
{
    while (*s)
    {
        ft_putchar(*s);
        s++;
    }
}

/*int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
        ft_putstr("Por favor, ingrese al menos un argumento");
    while (av[i])
    {
        ft_putstr(av[i]);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}*/