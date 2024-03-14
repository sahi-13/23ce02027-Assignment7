#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[1000];
    char temp=str[0];
    printf("enter the string:");
    scanf("%s",str);
    for(i=1;str[i]!='\0';i++)
    {
        if(str[i]>str[i-1])
        {
            if(str[i]>temp)
            temp=str[i];
            else 
            temp=temp;
        }
        if(str[i-1]>str[i])
        {
            if(str[i-1]>temp)
            temp=str[i-1];
            else 
            temp=temp;
        }
    } 
    printf(" the largest of the string is :%c",temp);
    return 0;
}