#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=*max_element(a,a+n);
    bool hash[m]={false};
   
    for(int i=0;i<n;i++){
       hash[a[i]]=true;
    }
     
    cin>>key;
    if(hash[key]==true)
        cout<<"element exists\n";
    else
        cout<<"element doen't exists";
}#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m=*max_element(a,a+n);
    bool hash[m]={false};
   
    for(int i=0;i<n;i++){
       hash[a[i]]=true;
    }
     
    cin>>key;
    if(hash[key]==true)
        cout<<"element exists\n";
    else
        cout<<"element doen't exists";
}