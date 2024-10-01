#include <stdio.h>
main()
{
    int x;
    printf("Enter Year");
    scanf("%d",&x);
    if(x%4==0){
        printf("Leap year");
    }
    // if(x%4!=0){
    //     printf("Not Leap Year ");        // YE BHI TARIKA HAI  leap year FIND KRNE KA
    //}
    else{
        printf("Not Leap Year");
    }
    return 0;
}

