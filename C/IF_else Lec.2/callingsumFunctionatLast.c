#include <stdio.h>
int sum(int a, int b);

int main()
{
    int a, b, z;
    printf("enter number::");
    scanf("%d", &a);
    printf("enter number::");
    scanf("%d", &b);
    z= sum( a,  b);
    printf("%d", z);

    return 0;
}
int sum(int a, int b)
{
   int  z = a + b;
    return z;
}
