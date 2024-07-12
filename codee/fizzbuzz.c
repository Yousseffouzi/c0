#include <unistd.h>
int main()
{
    int     i;
    char    j;
    
    i = 1;
    while(i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            write (1, "fizzbuzz\n", 9);
        else if (i % 3 == 0)
            write (1, "fizz\n", 5);
        else if (i % 5 == 0)
            write (1, "buzz\n", 5);
        
        else
        {
            if ( i < 10)
            {
                j = i + '0';
                write(1, &j, 1);
                write(1, "\n", 1);
            }
            else {
                j = i / 10 + '0';
                write(1, &j, 1);
                j = i % 10 + '0';
                write(1, &j, 1);
                write(1, "\n", 1);
            }
        }
        i++;
    }
}