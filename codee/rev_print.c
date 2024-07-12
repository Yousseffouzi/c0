#include <unistd.h>
int len(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return i;
}

int main (int argc, char **argv)
{
    int j;
    if (argc == 2)
    {
        j = len(argv[1]);
        while (argv[1][j - 1])
        {
            write (1, &argv[1][j - 1], 1);
            j--;
        }
    }
    write(1, "\n", 1);
    return (0);
}