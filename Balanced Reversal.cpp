#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1')
	        c++;
	    }
	    for(int i=0;i<n;i++){
	        if(i<n-c)
	        cout<<0;
	        else
	        cout<<1;
	    }
	    cout<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/BALREV?tab=statement
