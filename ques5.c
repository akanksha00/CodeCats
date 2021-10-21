//alpa,digit or special character
#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='0'&&ch<='9')
        printf("Digit");
    else if((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        printf("Alphabet");
    else
        printf("Special Character");
}