#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    string s;
	    cin>>s;
	    map<int,int>a;
	    a[x]++;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='R') x++;
	        else x--;
	        a[x]++;
	        
	    }
	    cout<<a.size()<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/TSTROBOT?tab=statement
