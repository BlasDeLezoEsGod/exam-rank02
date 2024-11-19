#include <unistd.h>

int main(int ac, char **av)
{
    int count;
    int i;

    i = 0;
    count = 0;
    if (ac == 2)
    {
        while (av[1][i])
        {
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
                count = av[1][i] - 'a' + 1;
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
                count = av[1][i] - 'A' + 1;
            else
                count = 1;
            while (count--)
                write (1, &av[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}
/*int is_upper(int c)
{
    if (c >= 'A' && c <= 'Z')
        return (1);
    return (0);
}
int is_lower(int c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    return (0);
}

int repeat_lower(int c)
{
    return (c - 96);
}
int repeat_upper(int c)
{
    return (c - 64);
}

int main(int ac, char **av)
{
    int i;
    int j;
    int x;
    int y;

    if (ac == 1)
    {
        write (1, "ERROR", 6);
        return 0;
    }
    else
    {
        i = 1;
        j = 0;
        while (av[i][j])
        {
            if (!is_lower(av[i][j]) && !is_upper(av[i][j]))
            {
                write(1, &av[i][j], 1);
                j++;
            }
            else if (is_lower(av[i][j]))
            {
                x = repeat_lower(av[i][j]);
                while (x > 0)
                {
                    write(1, &av[i][j], 1);
                    x--;
                }
                j++;
            }
            else if (is_upper(av[i][j]))
            {
                y = repeat_upper(av[i][j]);
                while (y > 0)
                {
                    write(1, &av[i][j], 1);
                    y--;
                }
                j++;
            }
        }
        i++;
    }
    return 0;
}*/