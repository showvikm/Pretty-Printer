int function()
{
    double iterator, j_iterator, k_iterator;
    for (iterator = 1; iterator <= 24; iterator++)
    {
        for (j_iterator = iterator; j_iterator < 24; j_iterator++)
        {
            printf("%d", iterator);
        }
        for (k_iterator = iterator; k_iterator < 24; k_iterator++)
        {
            printf("%d", iterator);
        }
    }
    return 100;
}