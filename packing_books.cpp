#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,y,z;
	    cin>>x>>y>>z;
	    int p=y/z;
	    if(y%z==0){
	        cout<<x*p<<endl;
	    }
	    else  cout<<x*(p+1)<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/BOOKPACK?tab=statement
