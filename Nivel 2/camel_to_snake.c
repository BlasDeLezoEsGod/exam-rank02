#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int count_spaces(char *str)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
        {
            count++;
            i++;
        }
    }
    return (count);
}

char    *put_memory(char *str)
{
    int i;
    int j;
    int x;
    char    *s;

    i = 0;
    j = 0;
    x = count_spaces(str);
    s = malloc(len(str) + x + 1);
    while (str[j])
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            s[i] = 95;
            str[j] += 32;
            i++;
        }
        s[i++] = str[j++];
    }
    s[i] = '\0';
    return(s);
}

int main(int ac, char **av)
{
    int i;
    char    *str;

    i = 0;
    if(ac == 2)
    {    
        str = put_memory(av[1]);
        while (str[i])
        {
            write(1, &str[i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return 0;
}