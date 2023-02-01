#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n1,n2,n3;
	cin>>n1>>n2>>n3;
	int a[n1+n2+n3];
	for(i=0;i<n1+n2+n3;i++)
	    cin>>a[i];
	sort(a,a+n1+n2+n3);
	set<int> b;
	for(i=0;i<n1+n2+n3;i++)
	{
	    if(a[i]==a[i+1])
	        b.insert(a[i]);
	}
	cout<<b.size()<<endl;
	for(auto i:b)
	    cout<<i<<endl;
	return 0;
}


#Question
https://www.codechef.com/problems/VOTERS?tab=statement
