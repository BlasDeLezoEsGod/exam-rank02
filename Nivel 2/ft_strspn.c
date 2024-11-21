#include <stddef.h>

size_t ft_strspn(const char *str, const char *accept)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while ((accept[j]) && str[i] != accept[j])
            j++;
        if (accept[j] == 0)
            return (i);
        i++;
    }
    return (i);
}
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
    if (ac == 3)
    {
        printf("%d\n", ft_strspn(av[1], av[2]));
        printf("%d\n", strspn(av[1], av[2]));
    }
    return 0;
}