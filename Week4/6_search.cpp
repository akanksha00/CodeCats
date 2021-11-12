#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int search(int a[],int l,int r,int k){
    while(l<r){
        int m= l + (r - l)/2;
        if(a[m]>k)
            return search(a,l,m-1,k);
        if(a[m]<k)
            return search(a,m+1,r,k);
        return m;
    }
    return l;
}
int main(){
    int n,k,res;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    res=search(a,0,n-1,k);
    cout<<res;
}