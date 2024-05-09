int function()
{
    double a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < 0 || b < 0)
        printf("At least one of the numbers is negative\n");
    if (a == 0 && b == 0)
        printf("Both of the numbers = 0\n");
    if (!(a > 0) || !(b > 0))
        printf("At least one of the numbers is positive\n");
    return 101;
}