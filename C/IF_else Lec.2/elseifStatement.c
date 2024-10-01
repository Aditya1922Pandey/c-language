// why we use if else statemnt ::



// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter any number");
//     scanf("%d",&n);
//     if(n>80){
//         printf("excellent");

//     }
//      if(n>60){
//         printf("good");

//     }
//      if(n<60){
//         printf("poor");

//     }
//     return 0;
// }
//To overcome this situation we have 2 method 
//1...we use else if
//2...we use greater and less simulatneously




//METHOD 1..
// #include <stdio.h>
// int main(){
//     int n;
//     printf("enter any number");
//     scanf("%d",&n);
//     if(n>80){
//         printf("excellent");

//     }
//     else if(n>60){
//         printf("good");

//     }
//     else{
//         printf("poor");

//     }
//     return 0;
// }



//METHOD 2...
#include <stdio.h>
int main(){
    int n;
    printf("enter any number");
    scanf("%d",&n);
    if(n>=80&&n<=100){
        printf("excellent");

    }
    else if(n>60&&n<80){
        printf("good");

    }
    else{
        printf("poor");

    }
    return 0;
}