#include <stdio.h>
#include<string.h>
int main() 
{
    char ch;
    char s1[500];
    char s2[5000];
    scanf("%c" ,&ch);
    scanf("%s" ,s1);
    scanf("\n");
    scanf("%[^\n]%*c",s2);
    printf("%c\n%s\n%s" ,ch,s1,s2);   
    return 0;
}
