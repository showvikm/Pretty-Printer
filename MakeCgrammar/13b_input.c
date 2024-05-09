int function()
{
    char fruit;
    printf("Which one is your favourite fruit:\n");
    printf("m) Mango\n");
    printf("b) Bananas\n");
    printf("p) Pineapple\n");
    printf("o) Orange\n");
    scanf("%s", &fruit);
    switch (fruit)
    {
    case 'm':
        printf("You like mango\n");
        break;
    case 'b':
        printf("You like bananas\n");
        break;
    case 'p':
        printf("You like pineapple\n");
        break;
    case 'o':
        printf("You like orange\n");
        break;
    default:
        printf("You entered an invalid choice\n");
    }
    return 100;
}