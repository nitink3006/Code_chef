#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int x=a+b;
	    int y=b+c;
	    int z=a+c;
	    cout<<max(max(x,y),z)<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/CHFSPL?tab=statement
