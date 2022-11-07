#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k; 
	    cin>>n>>k;
	    if(k==0){
	    if(n%4==0){
	        cout<<"Off"<<endl;
	    }
	    else {
	        cout<<"On"<<endl;
	    }}
	    if(k==1){
	    if(n%4==0){
	        cout<<"On"<<endl;
	    }    
	    else  cout<<"Ambiguous"<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/submit/KTTABLE?tab=statement
