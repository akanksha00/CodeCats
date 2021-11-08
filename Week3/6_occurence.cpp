#include<bits/stdc++.h>
using namespace std;

void countFreq(int arr[], int n, int k){
    unordered_map<int, int> mp;
    for(int i=0;i<n;i++)
        mp[arr[i]]++;
    
    cout<<mp.at(k);
}
int main(){
    int n,k;
    cout<<"Array size: ";
    cin>>n;
    int arr[n];
    cout<<"Array elements: ";
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Number:";
    cin>>k;
    countFreq(arr,n,k);
}
