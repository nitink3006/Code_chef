#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    for(int i=0;i<n;i++){
	        if (s[i]=='0')
	          a++;
	        else
	          b++;
	    }
	    if (b>a)
	       cout<<1+a<<endl;
	    else
	       cout<<b<<endl;
	    }
	return 0;
}



#Question
https://www.codechef.com/problems/ZEROSTRING?tab=statement
