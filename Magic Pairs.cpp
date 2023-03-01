#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>a[i];
	    }
	    if(n>1)
	    {
	        cout<<(n*(n-1))/2<<endl;
	    }
	    else
	    {
	        cout<<0<<endl;
	    }
	}
	return 0;
}


#Question
https://www.codechef.com/problems/ALEXNUMB?tab=statement
