#include <stdio.h>
int main()
{
    char c[30];
    scanf("%c",&c);
    if( (c>='a' && c<='z') || (c>='A' && c<='Z'))
        printf("yes");
    else
        printf("no");
    return 0;
}