#include <stdio.h>
int main()
{
int x;
printf("Enter a number:");
scanf("%d",&x);
if(x%5==0){
    if(x%3==0){
        printf("dividible by both");
    }
    else{
       printf("Not divisible");
    }
}
else{
    printf("Not didvisible");
}
    return 0;
}