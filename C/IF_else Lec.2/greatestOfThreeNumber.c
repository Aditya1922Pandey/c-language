#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter a number");
    scanf("%d", &x);
    printf("enter a number");
    scanf("%d", &y);
    printf("enter a number");
    scanf("%d", &z);

    // if (x > y && x > z)
    // {
    //     printf("%d is greater", x);
    // }
    // if (y > z && y > x)
    // {
    //     printf("%d is greater", y);
    // }
    // if (z > y && z > x)
    // {
    //     printf("%d is greater", z);
    // }
    if(x>y){
        if(x>z){printf("%d is greatest",x);}
        else{
            printf("%d is greatest",z);
        }
    }
    //  if(y>z){
    //     if(y>x){printf("%d is greatest",y);}
    //     else{
    //         printf("%d is greatest",x);
    //     }
    // }
    //  if(z>x){
    //     if(z>y){printf("%d is greatest",z);}
    //     else{
    //         printf("%d is greatest",y);
    //     }
    // }
    else{
        if(y>z){
            printf("%d is greatest",y);
        }
        else{printf("%d is greatest",z);}
    }

    return 0;
}
