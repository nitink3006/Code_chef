#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long x;
	    cin>>x;
	     int c=0;
	    while(x>0) {
	        if((x%10) == 4) {
	            c++;
	        }
	        x=x/10;
	}
	     cout<<c<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/submit/LUCKYFR?tab=statement
