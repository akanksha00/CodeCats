#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include<string.h>
int main(){
    char ch='0';
    FILE *p1, *p2;
    int i=0;
    char str[20];

    p1=fopen("C:\\Users\\Lenovo\\Desktop\\A.txt","r");
    p2=fopen("C:\\Users\\Lenovo\\Desktop\\B.txt","w");
    if(p1 == NULL || p2==NULL){
        printf("\nCannot access files..");
    }else{
        while((fscanf(p1,"%s",str))!=EOF)
        {
            if(i==4){
               
                fprintf(p2,"\n");
                 i=0;
            }
            if(strcmp(str,"Name:")==0)
                strcpy(str,"");
            if(strcmp(str,"Marks:")==0)
                strcpy(str,",");

            fprintf(p2,"%s ",str);
             i++;
        }
    }
    fclose(p1);
    fclose(p2);
    return 0;
}