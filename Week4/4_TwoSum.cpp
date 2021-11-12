#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void TwoSum(int a[],int n,int k){
    int i=0,j=n-1;
    while(i<j){
        if(a[i]+a[j]>k)
            j--;
        if(a[i]+a[j]<k)
            i++;
        else
            break;
    }
    cout<<i<<" "<<j;
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    TwoSum(a,n,k);
}