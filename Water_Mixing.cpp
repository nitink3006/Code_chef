#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,x,y;
	    cin>>a>>b>>x>>y;
	    if( a==b){
              cout<<"yes"<<endl;
          }
          else if( a<b){
              if ((b-a)<=x){
                  cout<<"YES"<<endl;
              }
              else {
                  cout<<"No"<<endl;
              }
              
          }
          else if (a>b){
              if((a-b)<=y){
                  cout<<"yes"<<endl;
              }
              else {
                  cout<<"no"<<endl;
              }
          }
      }
	return 0;
}




#Question
https://www.codechef.com/problems/WTRMIXING?tab=submissions
