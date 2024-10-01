#include <stdio.h>
int main()
{
    int x,y,area,p;
    printf("Enter length::");
    scanf("%d",&x);
    printf("Enter Bredth::");
    scanf("%d",&y);
    area=x*y;
    p=2*(x+y);
    if(area>p){
        printf("area is greater");
    }
    if(area==p){
        printf("Both Are Equal");
    }
        
    if(area<p){
        printf("perimeter is greater");
    }

    return 0;
}

