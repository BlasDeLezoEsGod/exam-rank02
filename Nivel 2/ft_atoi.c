#include <stdlib.h>
#include <stdio.h>

int ft_atoi(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (*str)
    {
        if (*str == ' ' || *str >= 9 && *str <= 13)
            str++;
        if (*str == '+' || *str == '-')
        {
            if (*str == '-')
                sign = -1;
            str++;
        }
        if (*str >= '0' && *str <= '9')
        {
            result = (result * 10) + *str - '0';
            str++;
        }
    }
    return (result * sign);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        printf("%d\n", ft_atoi(av[1]));
    }
    printf("%d\n", atoi(av[1]));
}