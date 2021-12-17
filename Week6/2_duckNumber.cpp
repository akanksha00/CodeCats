#include <iostream>
using namespace std;

bool check_duck(string N){
    //code
    if(N[0]=='0')
        return false;
    for(int i=0;i<N.size();i++)
    {
        if(N[i]=='0')
            return true; 
    }
    return false;
}
