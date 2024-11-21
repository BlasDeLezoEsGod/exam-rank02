#include <stddef.h>

size_t  ft_strcspn(char *str, char *reject)
{
    int i;
    int j;

    i = 0;
    while (str[i])
    {
        j = 0;
        while (reject[j])
        {
            if (str[i] == reject[j])
                return (i);
            j++;
        }
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
    size_t i;

    i = 0;
    if (ac == 3)
    {
        i = ft_strcspn(av[1], av[2]);
        printf("%d\n", i);
        printf("%d\n", strcspn(av[1], av[2]));
    }
    return 0;
}