#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
    int x;
    cin>>x;
	if(x<100){
	    cout<<x<<endl;
	}
	else if(x>100){
	    cout<<(x-10)<<endl;
	}
	else{
	    cout<<x<<endl;
	}
    }
	return 0;
}
