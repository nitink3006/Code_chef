#include <iostream>
using namespace std;

int main() {
	int t,d,e;
	cin>>t;
	for(int i=0;i<t;i++){
	    int count=0;
	    int size;
	    cin>>size;
	    string c;
	    for(int j=0;j<size;j++){
	        cin>>c[j];
	    }
	    for(int k=0;k<size;k++)
	    {
	     d=c[k];
	     e=c[k+1];
	    if(d==e)
	        {
	        count++;
	        }	        
	    else if(d!=e)
	       {
	        count;
	       }
	    }
	    	cout<<count<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/submit/DIFFCONSEC
