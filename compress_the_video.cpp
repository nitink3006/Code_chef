#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n],count=0;
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    for(int i=1;i<n;i++)
	    {
	    if(a[i-1]==a[i])
	    count++;
	    }
	    cout<<n-count<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/problems/COMPRESSVD?tab=statement
