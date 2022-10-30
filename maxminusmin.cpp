#include <iostream>
using namespace std;

int max(int a,int b,int c){
	    if(a>b&&a>c){
	        return a;
	    }
	    else if(b>c){
	        return b;
	    }
	    else return c;}
int min(int a, int b, int c){
	    
	    if(a<b&&a<c){
	        return a;
	    }
	    else if(b<c){
	        return b;
	    }
	    else  return c;}
	    
	    
int main() {
	int t,a,b,c;
	cin>>t;
	for(int i=1;i<=t;i++){
	    
	    cin>>a>>b>>c;
	    int output=max(a,b,c)-min(a,b,c);
	    cout<<output<<endl;
	    
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/MAXDIFFMIN?tab=statement
