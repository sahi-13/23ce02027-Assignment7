#include <stdio.h>
int main() {
    char str[100];
    int i, j;
    printf("Enter a string: ");
    scanf("%s",str);
     printf("\nString after removing non-alphabetic characters: ");
    for (i=0 ; str[i] != '\0'; i++) {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
     {
       printf("%c",str[i]);
    }
    }
    
    
    return 0;
}
