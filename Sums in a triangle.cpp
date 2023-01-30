#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    int tri[n+1][n+1];
	    int a[n+1][n+1];
	    
	    for(int i=1;i<=n;i++){
	        for(int j=1;j<=i;j++){
	            cin>>tri[i][j];
	        }
	    }
	    
	    for(int i=1;i<=n;i++){
	        a[n][i]=tri[n][i];
	    }
	    
	    for(int i=n-1;i>=1;i--){
	        for(int j=1;j<=i;j++){
	            a[i][j]=max(a[i+1][j],a[i+1][j+1])+tri[i][j];
	        }
	    }
	    
	    cout<<a[1][1]<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/SUMTRIAN?tab=statement
