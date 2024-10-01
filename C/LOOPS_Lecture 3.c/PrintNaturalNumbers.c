#include <stdio.h>
int main(){
    int i,n;
    printf("enter no upto which you want to print natural numbers");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        printf("%d\n",i);

    }
    return 0;
}