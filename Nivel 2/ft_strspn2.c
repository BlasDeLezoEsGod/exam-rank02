#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *str, int c)
{
    while (*str)
    {
        if (*str == c)
            return((char *)str);
        str++;
    }
    return (0);
}

int ft_strspn(const char *str, const char *accept)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (ft_strchr(accept, str[i]) == 0)
            break;
        i++;
    }
    return (i);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%d\n", ft_strspn(av[1], av[2]));
        printf("%d\n", strspn(av[1], av[2]));
    }
    return 0;
}