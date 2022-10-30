#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(c%b==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/CHEFSCORE?tab=statement
