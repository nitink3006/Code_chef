#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k=0;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        int s,j;
	        cin>>s>>j;
	        if((j-s)>5){
	          k++;
	    }
	    }
	    cout<<k<<endl;
	    }
	return 0;
}




#Question
https://www.codechef.com/problems/JDELAY?tab=statement
