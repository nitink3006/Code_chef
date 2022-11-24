#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,r3;
	    cin>>r1>>r2>>r3;
	    if(r1>r2+r3 or r2>r3+r1 or r3>r2+r1){
	        cout<<"Yes"<<endl;
	    }
	    else {
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/problems/MONOPOLY?tab=statement
