#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s,s1,s2;
	    cin>>s;
	    s1 = s.substr(0,n/2);
        s2 = s.substr(n/2,n);
        if(s1==s2){
            cout<<"yes"<<endl;
        }
        else cout<<"no"<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/submit/BROKENSTRING?tab=statement
