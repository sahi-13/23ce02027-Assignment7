#include<stdio.h>
#include<string.h>
int main()
{
    char x[100],y[100];
    int n=0;
    printf("enter string:");
    scanf("%s",x);
    for(int i=0;x[i]!='\0';i++)
    {n++;
    }
   
    for (int i=0;i<n;i++)
    {y[i]=x[n-i-1];}
    y[n]='\0';
    printf("Reverse of the string:%s",y);
    return 0;
}