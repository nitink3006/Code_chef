#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x,max=0;
	    cin>>n>>x;
	    while(n--){
	        int a,b;
	        cin>>a>>b;
	        if(a<=x && max<b)
	            max=b;
	      
	        
	    }
	    cout<<max<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/LP1TO201/problems/IMDB?tab=statement
