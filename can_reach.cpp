#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int x,y,k;
        cin>>x>>y>>k;
        if(x%k==0 && y%k==0){
            cout<<"Yes"<<endl;
        }
        else cout<<"No"<<endl;
    }
	return 0;
}



#Question
https://www.codechef.com/submit/CAN_REACH?tab=statement
