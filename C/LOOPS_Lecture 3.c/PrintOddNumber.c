#include <stdio.h>
int main(){
    int i,n;
    printf("enter no upto which you want to odd even numbers");
    scanf("%d",&n);
    // for(i=1;i<=n;i=i+2){
    //     printf("%d\n",i);

    // }


    //OR Method 2


    for(i=1;i<=n;i=i+1){
        if(i%2!=0){
            printf("%d\n",i);
        }
        

   }
    return 0;
}