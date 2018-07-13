#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
if(number >= 0)
{
    if(number % 2 == 0)
        printf("%d is even.", number);
    else
        printf("%d is odd.", number);
}
else
printf("invalid");
    return 0;
}