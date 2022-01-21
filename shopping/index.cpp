#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0; i<t ;i++){
	    int n,m;
	    cin>>n>>m;
	    vector<int> A[n],B[m];
	    int sa=0,sb=0;
	    for(int i=0;i<n;i++){
	        cin>>A[i];
	        sa+=A[i];
	    }
	    for(int i=0;i<m;i++){
	        cin>>B[i];
	        sb+=B[i];
	    }
	   if(sa>=sb)
	    {
	        cout<<"NO";
	    }
	    else{
	        cout<<"YES"<<endl;
	        sort(B.begin(),B.end());
	        for(int i=0;i<n;i++)
	            cout<<upper_bound(B.begin(), B.end(), A[i])-B.begin()<<" ";
	        }
	   
	}
	return 0;
}
