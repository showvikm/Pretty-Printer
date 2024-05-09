#include <stdio.h>

int function()
{
    double iterator, j_iterator, times;
    scanf("%d", &times);
    iterator = 0;
    j_iterator = 0;
    while (iterator <= times)
    {
        while (j_iterator <= times)
        {
            printf("%d j_iterator\n", j_iterator);
            j_iterator++;
        }

        if (iterator >= 2)
        {
            printf("%d\n", iterator);
        }
        iterator++;
    }
    if (iterator >= 2)
    {
        printf("%d\n", iterator);
    }
    iterator++;

    return 10000;
}
