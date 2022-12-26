#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c;
	    cin>>d>>e>>f;
	    if((a+b+c)==(d+e+f)){
	        cout<<"Pass"<<endl;
	    }
	    else cout<<"Fail"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/THREEQ
