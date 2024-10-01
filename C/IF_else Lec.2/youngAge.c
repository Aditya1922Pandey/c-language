#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a age");
    scanf("%d", &x);
    printf("enter a age");
    scanf("%d", &y);
    printf("enter a age");
    scanf("%d", &z);

    if (x < y && x < z)
    {
        printf("%d is youngest", x);
    }
    if (y < z && y <x)
    {
        printf("%d is youngest", y);
    }
    if (z < y && z < x)
    {
        printf("%d is youngest", z);
    }
    return 0;
}
