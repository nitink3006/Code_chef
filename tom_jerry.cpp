#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a,b,c,d,k;
	    cin>>a>>b>>c>>d>>k;
	    int e=abs(a-c)+abs(b-d);
	    if(k==e){
	        cout<<"Yes"<<endl;
	    }
	    else if(e>k){   
	        cout<<"No"<<endl;
	    }
	    else if((k-e)%2==0){   
	        cout<<"Yes"<<endl;
	    }
	    else cout<<"No"<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/TANDJ1?tab=statement
