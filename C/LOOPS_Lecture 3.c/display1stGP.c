//  Display this G.P :: 1,2,4,8,16,32,... upto n terms
//  nth term is a*rto power n;
 
 #include <stdio.h>
 #include <math.h>
int main(){
   int i,n;
   printf("enter no of term");
   scanf("%d",&n);
   for(i=1;i<=1*pow(2,n-1);i=i*2){
    printf("%d ",i);
   }
   return 0;
    
}