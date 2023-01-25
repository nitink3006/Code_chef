#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int arr[26];
	    for(int i=0;i<26;i++){
	        cin>>arr[i];
	    }
	    string s;
	    cin>>s;
	    int ans=0;
	    for(int i='a';i<='z';i++)
	    {
	        bool f=false;
	        for(int j=0;j<s.length();j++)
	        {
	            if(i==s[j])
	            {
	                f=true;
	            }
	        }
	        if(f==false)
	        {
	            ans+=arr[i-97];
	        }
	    }
	    cout<<ans <<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/MATPAN?tab=statement
