#include <stdio.h>
int main(void)
{
    int quarters = 25, dimes = 10, nickels = 5, pennies = 1, change, sum = 0;
    do
    {
        printf("Change owed: ");
        scanf("%d", &change);
    }
    while (change < 0 || getchar() != '\n');
    while (change >= quarters)
    {
        change -= quarters;
        sum += 1;
    }
    while (change < quarters && change >= dimes)
    {
        change -= dimes;
        sum += 1;
    }
    while (change < dimes && change >= nickels)
    {
        change -= nickels;
        sum += 1;
    }
    while (change < nickels && change >= pennies)
    {
        change -= pennies;
        sum += 1;
    }
    while (change == 0)
    {
        break;
    }
    printf("%d\n", sum);
}
