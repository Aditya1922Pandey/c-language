#include <stdio.h>
main()
{
    int x,y;
    printf("Enter C.P::");
    scanf("%d",&x);
    printf("Enter S.P::");
    scanf("%d",&y);
    if(x>y){
        printf("Loss");
    }
    if(x==y){
        printf("No profit No loss");

    }
    if(x<y){
        printf("No profit No loss");
    }
    return 0;
}

