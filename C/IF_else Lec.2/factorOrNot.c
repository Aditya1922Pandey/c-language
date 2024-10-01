#include <stdio.h>
main()
{
    int x,y;
    printf("Enter number");
    scanf("%d",&x);
    printf("Enter number");
    scanf("%d",&y);
    
    if(x%y==0){
        printf("factor");
    }
     if(x%y!=0){
         printf("not factor");        // YE BHI TARIKA HAI  factor FIND KRNE KA
    }
    // else{
    //     printf("not factor");
    // }
    return 0;
}

