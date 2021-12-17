#include <stdio.h>
#include <string.h>

int main()
{
        char str[50];
        int len,i;
        char *s;

        printf("Enter any String : ");
        scanf("%s",str);

        len=strlen(str);
        printf("\nReverse: ");
        for(i=len;i>=0;i--)
            printf("%c",*(s+i));
      
        return 0;
}