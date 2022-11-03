#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    if((2*a)<(5*b)){
	        cout<<"Candy"<<endl;
	    }
	    else if((2*a)==(5*b)){
	        cout<<"Either"<<endl;
	    }
	    else   cout<<"Chocolate"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/submit/TASTEDEC?tab=statement
