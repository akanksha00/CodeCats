//total no of notes in given amount
#include<stdio.h>
int main(){
    int amt,n;
    short i=0;
    printf("Enter amount: ");
    scanf("%d",&amt);
    int notes[]={1,2,5,10,20,50,100,200,500,2000};
    while(amt){
        n = amt/notes[i];
        if(n)
            printf("\nNo of Notes of %d: %d",notes[i],n);
        amt=amt%notes[i];
        i++;
    }
}