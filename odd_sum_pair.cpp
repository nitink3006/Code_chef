#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        if((a+b)%2!=0){
            cout<<"YES"<<endl;
        }
        else if((b+c)%2!=0){
            cout<<"YES"<<endl;
        }
        else if((a+c)%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}



#Questions

https://www.codechef.com/START61D/problems/ODDSUMPAIR
