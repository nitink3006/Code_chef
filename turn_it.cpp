#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int u,v,a,s;
	    cin>>u>>v>>a>>s;
	    if(u==v){ cout<<"YES"<<endl;}
    else if(pow(u,2) - 2*a*s<=pow(v,2)) {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/NFS?tab=statement
