#include <iostream>
using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--){
         int n,k;
         cin>>n>>k;
         if(k*(k+1)/2<=n){
             cout<<"YES"<<endl;
         }
         else cout<<"NO"<<endl;
     }
	return 0;
}




#Questions
https://www.codechef.com/submit/BALLBOX?tab=statement
