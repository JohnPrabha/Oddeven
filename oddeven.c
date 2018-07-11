#include <stdio.h>
int main()
{
    double number;
    scanf("%lf", &number);

    if (number <= 0.0)
    {
        if (number == 0.0)
            printf("ZERO");
        else
            printf("NEGATIVE");
    }
    else
        printf("POSITIVE");
    return 0;
}