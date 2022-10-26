#include <stdio.h>

int main()
{
    int year;
    float interest, value, amount, period;
    while (year <= period)
    {
        printf("%2d %8.2f\n", year, amount);
        value = amount + interest * amount;
        year = year + 1;
        amount = value;
    }
    return 0;
}