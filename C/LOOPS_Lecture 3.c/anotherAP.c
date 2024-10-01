//Display this A.P ::: 4,7,10,13,17,........upto n terms
// here a=4,d=3 so nth term is nth term=a+(n-1)d=3*n-1
#include <stdio.h>
int main(){
    int i,n;
    printf("enter how many terms u want to display::");
    scanf("%d",&n);
    // for(i=4;i<=3*n-1;i=i+3){
    //     printf("%d ",i);
    //  }

    int a=4;
    for(i=1;i<=n;i=i+1){
        printf("%d ",a);
        a=a+3;
    }
   
    
    return 0;
}