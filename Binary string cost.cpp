#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,y;
	    cin>>n>>x>>y;
	    string s;
	    cin>>s;
	    int c=0,k=0;
	    for(int i=0;i<n;i++){
	        if(s[i]=='0'){
	           c++;
	        }
	        else{
	            k++;
	        }
	    }
	    if(c==0 || k==0){
	        cout<<"0"<<endl;
	    }
	    else{
	        if(x<y)
	        cout<<x<<endl;
	        else
	        cout<<y<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/problems/BSCOST?tab=statement
