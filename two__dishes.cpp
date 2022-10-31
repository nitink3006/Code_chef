#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b,c;
	    cin>>n>>a>>b>>c;
	    if((a+c)>=n && b>=n){
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/TWODISH?tab=statement
