#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a>=b) b+=c;
        else a+=c;

        if(a>=b) b+=d;
        else a+=d;

        if(a>=b) cout<<"N"<<endl;
        else cout<<"S"<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/FRGAME?tab=statement
