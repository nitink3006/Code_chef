#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int t1,t2,s,n;
        cin>>n>>s;;
        if(n>=s){
            cout<<s<<endl;
        }
        else{
            cout<<(n-(s-n))<<endl;
        }
    }
	return 0;
}


#Questions
https://www.codechef.com/LP1TO201/problems/MAX_DIFF?tab=statement
