/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char aname[20];
   char Lname[20];
   
   int age;
   float height;
   printf("enter first name");
   scanf("%s",aname);
   printf("enter last name");
   scanf("%s",Lname);

    printf("enter age");
   scanf("%d",&age);
    printf("enter height");
   scanf("%f",&height);
   printf("%s %s %d %f",aname,Lname,age,height);


    return 0;
}