#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int t1,t2,r1,r2;
	    cin>>t1>>t2>>r1>>r2;
	    if(pow(t1,2)/pow(r1,3)==pow(t2,2)/pow(r2,3))
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/KEPLERSLAW?tab=statement
