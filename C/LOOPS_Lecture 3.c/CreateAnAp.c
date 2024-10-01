#include <stdio.h>
int main(){
    int i,a,n,d;
    printf("enter first term::");
    scanf("%d",&a);
    printf("enter how many terms u want to display::");
    scanf("%d",&n);
    printf("enter common difference::");
    scanf("%d",&d);
    int z=a;
    for(a;a<=z+(n-1)*d;a=a+d){
        printf("%d ",a);
    }
    // int z=a;
    // for(int i=1;i<=n;i++){
    //     printf("%d ",z);
    //     z=z+d;
    // }
    // aditya kumar pandey
    
   
   
    
    return 0;
}