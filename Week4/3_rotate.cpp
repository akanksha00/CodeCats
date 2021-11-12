#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void reverse(int a[], int l, int r){
   // int l=i,r=j;
    for(int i=l;i<r;i++){
        int temp=a[i];
        a[i]=a[r];
        a[r]=temp;
        r--;
    }
}
void rotate(int a[],int n, int k){
    k=k% n;
    reverse(a,0,n-k-1);
    reverse(a, n-k,n-1);
    reverse(a,0,n-1);
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    rotate(a,n,k);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}