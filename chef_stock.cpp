#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    float s,a,b,c;
	    cin>>s>>a>>b>>c;
	    float k=s+(s*(c/100));
	    if((k>=a) && (k<=b)){
	        cout<<"Yes"<<endl;
	    }
	    else { 
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/CSTOCK?tab=statement
