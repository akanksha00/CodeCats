#include <iostream>
#include <map>
using namespace std;
int main(){
    int n,temp;
    map<int,int> mp;
    cin>>n;
    int a[n];
       
    for(int i=0;i<n;i++){
         cin>>a[i];
        mp[a[i]]++;
    }
    
    for(auto x:mp)
        cout<<x.first<<" "<<x.second<<endl;
}