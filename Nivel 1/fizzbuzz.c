#include <unistd.h>

void    ft_putchar(int  c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int   i)
{
    if (i >= 10)
        ft_putnbr(i / 10);
    ft_putchar((i % 10) + 48);
}

int main(void)
{
    int    i;

    i = 0;
    while (++i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            write (1, "fizzbuzz", 8);
            write(1, "\n", 1);
        }
        else if (i % 3 == 0)
        {
            write (1, "fizz", 4);
            write(1, "\n", 1);
        }
        else if (i % 5 == 0)
        {
            write (1, "buzz", 4);
            write(1, "\n", 1);
        }
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
        }
    }
    return (0);
}
