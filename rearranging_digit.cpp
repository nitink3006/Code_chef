#include <iostream>
using namespace std;

int main() {
	int t;
	 cin>>t;
	 while(t--){
	     int n,i;
	     cin>>n;
	     char a[n+1];
	     cin>>a;
	     int k=0;
	     
	     for(i=0;i<n;i++){
	     if(a[i]=='5' || a[i]=='0'){
	         k=1; break;
	     }
	     }
	     (k==1)?cout<<"Yes"<<endl:cout<<"No"<<endl;
	 }
	return 0;
}



#Question
https://www.codechef.com/problems/DIGARR?tab=statement
