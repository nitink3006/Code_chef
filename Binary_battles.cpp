#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    cout<<log2(n)*a + (log2(n)-1)*b<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/BIN_BAT?tab=statement
