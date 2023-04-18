#include <stdio.h>

int main()
{
    int first;
    int second;
    
    for (first = 0; first <= 8; first++)
    {
        for (second = first + 1; second <= 9; second++)
        {
            putchar(first + '0');
            putchar(second + '0');
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    
    return 0;
}
