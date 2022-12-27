#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int k=0;
	    int d=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
	           k++;
	           if(k>2){
	               cout<<"Happy"<<endl;
	               d=1;
	               break;
	           }
	        }
	        else 
	        k=0;
	     }
	        if(d==0)
	            cout<<"Sad"<<endl;
	    }
	return 0;
}



#Question
https://www.codechef.com/problems/HAPPYSTR?tab=statement
