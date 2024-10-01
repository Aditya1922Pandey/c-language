#include <stdio.h>
int main(){
    int x;
    printf("enter number::");
    scanf("%d",&x);
    // if(x%5==0 || x%3==0){
    //     if(x%15!=0){
    //         printf(" divisible by 5 or 3 but not by 15");
    //     }
    //     else{
    //         printf("divisible by 5 or 3 and 15");
    //     }
    // }
    // else{
    //     printf(" Not divisible by 5 or 3");
    // }
    if((x%5==0 || x%3==0) && x%15!=0){
        printf("divisible by 5 or 3 but not by 15");

    }
    else{
        printf("criteria not meet");
    }

    return 0;
}