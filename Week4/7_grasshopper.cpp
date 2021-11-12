#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int x,n,T;
     cin>>T;
    for(int i=0;i<T;i++){
        cin>>x>>n;
        for(int i=1;i<=n;i++){
            if((x&1)==0)
                x-=i;
            else
                x+=i;
        }
        cout<<x<<"\n";
     }
}