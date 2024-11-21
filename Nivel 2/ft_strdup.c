#include <stdlib.h>

size_t ft_strlen(char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

char    *ft_strdup(char *str)
{
    char    *dup;
    int i;

    i = 0;
    dup = malloc((ft_strlen(str) + 1) * sizeof(char *));
    if (!dup)
        return (NULL);
    while (*str)
    {
        dup[i++] = *str;
        str++;
    }
    dup[i] = '\0';
    return(dup);
}
#include <stdio.h>
#include <string.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%s\n", ft_strdup(av[1]));
        printf("%s\n", strdup(av[1]));
    }
    return 0;
}