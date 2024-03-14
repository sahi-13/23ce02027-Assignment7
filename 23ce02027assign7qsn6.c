#include<stdio.h>
#include<string.h>
int main()
{
char s[200],ss[200];
printf("\nEnter string:");
gets(s);
printf("\nEnter the sub string:");
gets(ss);
if(strstr(s,ss)==NULL)
printf("\nSubstring is not found.");
else
printf("\nSubstring is found");
return 0;

}