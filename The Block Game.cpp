#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x=0,mod;
	    cin>>n;
	    int num = n;
        while(n>0)
        {  
            mod = n%10;
            x = x * 10 + mod;  
            n = n/10;
        }
        if(num==x){
            cout<<"wins"<<endl;
        }
        else cout<<"loses"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PALL01
