#include <stdio.h>

int main()
{
    char abc;
    printf("enter letter::");
    scanf("%c",&abc);
    if(abc=='a'||abc=='o'||abc=='e'||abc=='i'||abc=='u')
    {
        printf("vowel");
        
    }
    else
    {
        printf("consonant");
        
    }
    
    return 0;
}
// ||  used for {or}
// && used for {and}