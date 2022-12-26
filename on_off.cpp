#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,r;
	    int count = 0;
	    
	    cin>>s;
	    cin>>r;
	    for(int i=0;i<n;i++){
	        if(s[i]!=r[i])
	            count++;
	    }
	    
	    if(count%2 == 0)
	        cout<<1<<endl;
	   else
	        cout<<0<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/ON_OFF?tab=statement
