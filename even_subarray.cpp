#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    for(int i=1;i<=n;i++){
	        sum+=i;
	        }
	        if(sum%2==0)
	            cout<<n<<endl;
	        else
	            cout<<n-1<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/MXEVNSUB?tab=statement
