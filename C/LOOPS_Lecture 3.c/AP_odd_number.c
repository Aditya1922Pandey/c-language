//Display this A.P ::: 1,3,5,7,9,11,........upto n terms
// here a=1,d=2 so nth term is nth term=a+(n-1)d=2*n-1
#include <stdio.h>
int main(){
    int i,n;
    printf("enter how many terms u want to display::");
    scanf("%d",&n);
    for(i=1;i<=2*n-1;i=i+2){
        printf("%d ",i);
    }
   
    
    return 0;
}