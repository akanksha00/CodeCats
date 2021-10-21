#include<stdio.h>
int main(){
    int n1,n2,n3,n4,n5,M;
    float P;
    char G;
    printf("\nMaximum Marks:");
    scanf("%d",&M);
    printf("Marks obtained in\n");
    printf("Physics: ");
    scanf("%d",&n1);
    printf("Chemistry: ");
    scanf("%d",&n2);
    printf("Biology: ");
    scanf("%d",&n3);
    printf("Mathematics: ");
    scanf("%d",&n4);
    printf("Computer: ");
    scanf("%d",&n5);
    P=(n1+n2+n3+n4+n5)*100/(5*M);
    printf("\nPercentage = %.2f%%\t",P);

    if(P<40)
        printf("Grade: F");
    else if(P>=40 && P<60)
         printf("Grade: E");
    else if(P>=60 && P<70)
         printf("Grade: D");
    else if(P>=70 && P<80)
         printf("Grade: C");
    else if(P>=80 && P<90)
         printf("Grade: B");
    else
        printf("Grade: A");
}