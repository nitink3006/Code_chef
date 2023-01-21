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
	    map<char,int> mp;
	    for(int i=0;i<n;i++){
	       
	        mp[s[i]]++;
	    }
	    int a=0;
	    for(auto b: mp){
	        if(b.second%2!=0){
	            a=1;
	        }
	    }
	    if(a==1)   cout<<"NO"<<endl;
	    else  cout<<"YES"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/ABSTRING?tab=statement
