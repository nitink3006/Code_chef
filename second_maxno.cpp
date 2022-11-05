#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x[3]={a,b,c};
	    sort(x,x+3);
	    cout<<x[1]<<endl;
	}
	return 0;
}




#Questions
https://www.codechef.com/submit/SNDMAX?tab=statement
