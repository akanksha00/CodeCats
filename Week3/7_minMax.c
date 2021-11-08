#include <stdio.h>

int main(){
     int n,s,l,ss,sl;
    printf("Enter Size:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    s=arr[0];
    l=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l)
            l=arr[i];
        if(arr[i]<s)
            s=arr[i];
    }
    sl=s;
    ss=l;
    for(int i=0;i<n;i++){
        if(arr[i]>s && arr[i]<ss)
            ss=arr[i];
        if(arr[i]<l && arr[i]>sl)
            sl=arr[i];
    }
    printf("Smallest: %d \nSecond smallest: %d\nLargest: %d\nsecond largest: %d",s,ss,l,sl);
}