#include <unistd.h>

char    *rev_print(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    while (i + 1)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
    return(str);
}

int main(void)
{
    char    *str = "Hola";
    
    rev_print(str);
    return 0;
}