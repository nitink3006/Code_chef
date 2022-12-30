#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,i;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    if(n%2==1)
	       cout<<"NO"<<endl;
	    else{
	        int i;
	        for(i=0;i<n;i+=2){
	            if(a[i]!=a[i+1]){
	                cout<<"NO"<<endl;
	                break;
	            }
	        }
	        if(i==n)
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PETSTORE?tab=statement
