#include <stdio.h>
int main()
{
    int a,b,q,r;
    printf("Enter Dividened ::");
    scanf("%d",&a);
    printf("Enter Devisor ::");
    scanf("%d",&b);
    // q=a/b;
    // r=a-b*q;//YE BHI LIKH SKTE HAI LEKIN ABHI MODULUS SE SEEKH LOO
    r=a%b;
    printf("The remainder when %d is didvided by %d is ::%d",a,b,r);
    return 0;



   


}