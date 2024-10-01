#include <stdio.h>
int main()
{
    int x;
    printf("enter a number");
    scanf("%d", &x);
    if (x > 99 && x < 1000)
    {
        printf("It is three digit number");
    }
    else
    {
        printf("It is not three digit number");
    }

    return 0;
}
