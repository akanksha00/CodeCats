#include <iostream>
using namespace std;

int main() {
    int T,n;
	// your code goes here
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>n;
	    int c=0;
	    while(n>=5){
	        n/=5;
	        c+=n;
	    }
	    cout<<c<<endl;
	}
	return 0;
}
