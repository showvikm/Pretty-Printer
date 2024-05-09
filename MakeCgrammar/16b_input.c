int function()
{
    double iterator, times;
    iterator = 0;
    scanf("%d", &times);
    do
    {
        iterator++;
        printf("%d\n", iterator);
    } while (iterator >= times);
    return 10000;
}