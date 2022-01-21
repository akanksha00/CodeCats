// A C/C++ Program to generate OTP (One Time Password)

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long n,c;
        cin>>n;
        vector<int> price(n),fr(n),bk(n),cust(n),res(n);
        for(int i=0;i<n;i++)
            cin>>price[i];
        for(int i=0;i<n;i++)
            cin>>fr[i];
        for(int i=0;i<n;i++)
            cin>>bk[i];
        cin>>c;
        for(int i=0;i<c;i++)
            cin>>cust[i];
        
        
    }
    return 0;
}