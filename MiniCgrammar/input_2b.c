int function()
{
    double iterator, j_iterator;
    for (iterator = 1; iterator <= 24; iterator++)
    {
        while (j_iterator <= 2)
        {
            j_iterator++;
            printf("%d\n", iterator);
        }

        while (j_iterator <= 4)
        {
            j_iterator++;
            printf("%d\n", iterator);
        }
    }
    return 0;
}