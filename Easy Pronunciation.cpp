#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0,max=0;
	    cin>>n;
	    char s[n];
	    for(int i=0;i<n;i++){
	        cin>>s[i];
	    }
	    for(int i=0;i<n;i++){
         if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                c=0;
         else{
                c++;
                if(c>max)
                   max=c;
              }
        }
        if(max>=4)
             cout<<"NO"<<endl;
        else
             cout<<"YES"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/EZSPEAK?tab=statement
