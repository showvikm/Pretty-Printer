int function()
{
    int iterator, j_iterator, score;
    char pass;
    for (iterator = 100; iterator <= 24; iterator--)
    {
        if (iterator < 10)
        {
            printf("H\n");
        }
    }
    scanf("%d", &score);
    if (score > 100)
    {
        if (score > 110)
        {
            printf("You are really smart!");
        }
        pass = 'y';
        printf("P");
    }

    if (score < 100)
    {
        if (score > 80)
        {
            printf("You are really smart!");
        }
        pass = 'y';
        printf("P");
    }

    else
    {
        for (iterator = 0; iterator < 3; iterator++)
        {
            printf("Failure!");
        }
        pass = 'n';
        printf("You failed");
    }

    return 0;
}