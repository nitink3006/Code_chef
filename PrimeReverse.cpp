#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,c=0,d=0;
        cin>>n;
        string a,b;
	    cin>>a>>b;
	    for(int i=0;i<n;i++)
	    {
	       
	        if(a[i]=='1')
	        {
	            c++;
	        }
	        if(b[i]=='1')
	        {
	            d++;
	        }
	    }

	    if(c==d)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
        
    }
	return 0;
}



#Question
https://www.codechef.com/problems/PRIMEREVERSE?tab=statement
