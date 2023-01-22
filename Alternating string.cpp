#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c1=0,c2=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='1'){
	            c1++;
	        }else{
	            c2++;
	        }
	    }
	    if(c1==c2){
	        cout<<c1+c2<<endl;
	    }else if(c1>c2){
	        cout<<(c2*2)+1<<endl;
	    }else if(c1<c2){
	        cout<<(c1*2)+1<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/problems/ALTSTR?tab=statement
