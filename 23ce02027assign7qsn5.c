#include<stdio.h>
#include<string.h>
int main()
{
    int i,number;
    int n=0;
    char str[n+1];
    printf("Enter the string: ");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    n++;
    for(i=0;i<n/2;i++)
    {
       if(str[i]==str[n-1-i])
       number=1;
       else if(str[i]!=str[n-1-i])
       {number=0;
       break;}
    }
    if(number ==1)
    printf("The entered string is palindrome");
    if(number ==0)
    printf("The entered string is not a palindrome");
    return 0;
}