#include <stdio.h>
main()
{
    int x;
    printf("Enter Integer");
    scanf("%d",&x);
    if(x<0){
        x=-x;
    }
    printf("absolute Number is ::%d",x);
//    if(x>0){
//         printf("Absolute value is %d",x);
//     }
//     else{
//         printf("Absolute value is %d",-x); 

//     }

    return 0;
}

