#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        vector<char>lans;
        vector<char>rans;
	    string s;
	    cin>>s;
	    
	    for(int i=1; i<s.length(); i++)
	    {
	        lans.push_back(s[i]); 
	    }
	    lans.push_back(s[0]);
        rans.push_back(s[(s.length()-1)]);
	    for(int i=0; i<s.length()-1; i++)
	    {
	        rans.push_back(s[i]);
        } 
        cout<<(rans==lans ? "YES" : "NO")<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/RECNDSTR?tab=statement
