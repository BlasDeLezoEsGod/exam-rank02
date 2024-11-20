#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    int x;
    int y;

    x = 0;
    y = 0;
    if (ac == 4)
    {
        x = atoi(av[1]);
        y = atoi(av[3]);
        if (av[2][0] == '^')
            printf("%d", x * y);
        else if (av[2][0] == '/')
            printf("%d", x / y);
        else if (av[2][0] == '+')
            printf("%d", x + y);
        else if (av[2][0] == '-')
            printf("%d", x - y);
        else if (av[2][0] == '%')
            printf("%d", x % y);
        else
            printf("NULL");
    }
    printf("\n");
    return 0;
}