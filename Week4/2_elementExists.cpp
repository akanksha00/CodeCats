#include <iostream>
using namespace std;
int main(){
    int n,key;
    bool hash[n];
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        hash[a[i]]=true;
    }
    cin>>key;
    if(hash[key]==true)
        cout<<"element exists\n";
    else
        cout<<"element doen't exists";
}