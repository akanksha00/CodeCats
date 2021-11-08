#include <stdio.h>
void main(){
    int n,sum=0,evenS=0,oddS=0,even=0,odd=0;
    printf("Size of Array:");
    scanf("%d",&n);
    int arr[n];
    printf("\nInput %d elements:",n);
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
       
       if(arr[i]%2==0)
        evenS+=arr[i];
       else
        oddS+=arr[i];
    }
    for(int i=0;i<n;i++)
    {
      
       if(i%2==0)
        even+=arr[i];
       else
        odd+=arr[i];
    }
    printf("\n\n%d %d %d %d %d",sum,evenS,oddS,even,odd);
}