#include <stdio.h>
int atoi(char *str)
{
    int i = 0;
    int r = 0;
    int s = 1;

    while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ' )
    {
        i++;
    }
    if (str[i] == '-' || str[i] == '+' )
    {
        if (str[i] == '-')
            s = s * -1;
            i++;
    }

    while (str[i] >= '0' && str[i] <= '9')
    {
        r = r * 10 + (str[i] - '0');
        i++;
    }
    return (r * s);
}

int main()
{
    printf("%d",atoi("          -1283oy24i"));
    return (0);
}