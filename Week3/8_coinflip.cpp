#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,G,I,N,Q,c=0;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>G;
	    for(int j=0;j<G;j++)
	    {
	        cin>>I>>N>>Q;
	        if(I==Q)
	            (N&1==1)?c=(N-1)/2:c=N/2;
	       else
	        (N&1==1)?c=(N+1)/2:c=N/2;
	       cout<<c<<"\n";
	    }
	    
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,G,I,N,Q,c=0;
	cin>>T;
	for(int i=0;i<T;i++){
	    cin>>G;
	    for(int j=0;j<G;j++)
	    {
	        cin>>I>>N>>Q;
	        if(I==Q)
	            (N&1==1)?c=(N-1)/2:c=N/2;
	       else
	        (N&1==1)?c=(N+1)/2:c=N/2;
	       cout<<c<<"\n";
	    }
	    
	}
	return 0;
}
