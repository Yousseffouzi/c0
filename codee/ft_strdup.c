#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return i;
}

char    *ft_strdup(char *src)
{
    int i = 0;
    char *new;

    new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
    if (!new)
    {
        return NULL;
    }
    while (src[i])
    {
        new[i] = src[i];
        i++;
    }
    return new;
}
int main()
{
    char s1[] = "test";
    printf ("%s", ft_strdup(s1));
    return (0);
}