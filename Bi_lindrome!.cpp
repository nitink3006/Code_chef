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
	bool flag=false;
	for(int i=0;i<=n;i++){
	    for(int j=i+1;j<n;j++){
	         if(s[i]==s[j]){
	            flag=true;
	       }
	    }
	}
	if(flag) cout<<n-2<<endl;
	else cout<<-1<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/QTOO_2523?tab=statement
