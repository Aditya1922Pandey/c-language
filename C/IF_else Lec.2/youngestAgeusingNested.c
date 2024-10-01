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
    if(x<y){
        if(x<z){
            printf("%d is youngest",x);

        }
        else{
            printf("%d is youngest",z);
        }
    }
    else{
        if(y<z){
            printf("%d is youngest",y);
        }
        else{
            printf("%d is youngest",z);
        }
       
    }

    
    return 0;
}