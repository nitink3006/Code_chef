#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,mid;
	cin>>t;
	while(t--){
	    string s,s1,s2;
	    cin>>s;
	    int l=s.size();
	    if(l%2==0){
	    mid=l/2;
	    s1=s.substr(0,mid);
	    s2=s.substr(mid);
	    }
	    else
	    {
	    mid=(l-1)/2;
	    s1=s.substr(0,mid);
	    s2=s.substr(mid+1);
	    }
	    sort(s1.begin(),s1.end());
	    sort(s2.begin(),s2.end());
	    if(s1==s2)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/problems/LAPIN?tab=statement
