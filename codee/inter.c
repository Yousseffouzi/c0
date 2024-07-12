#include <unistd.h>
int main (int ac, char **av)
{
    int i;
    int r;
    int tab[256] = {0};

    i = 0;
    if (ac == 3)
    {
        while (av[2][i])
        {
            r = (int)av[2][i];
            tab[r] = 1;
            i++;
        }
        while (av[1][i])
        {
            r = (int)av[1][i];
            if (tab[r] == 1)
            {
                write(1, &av[1][i], 1);
                tab[r] = 0;
                i++;
            }
        }
    }
    write(1, "\n", 1);
}