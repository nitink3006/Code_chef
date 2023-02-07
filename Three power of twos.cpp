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
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='1')
	        {
	            c++;
	        }
	    }
	    if(s=="1" || s=="10")
	    {
	        cout<<"NO"<<endl;
	    }
	    else if(c<=3)
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
https://www.codechef.com/problems/THREEPOW2?tab=statement
