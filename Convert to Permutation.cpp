#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	        cin>>arr[i];
	        
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=arr[i];
	    
	    sort(arr,arr+n,greater<int>());
	    int i;
	    int temp=n;
	    for(i=0;i<temp;i++){
	       if(arr[i]>temp-i)
	       break;
	    }
	    if(i!=temp)
	    {
	    cout<<"-1"<<endl;
	    }
	    else
	        cout<<((n*(n+1))/2)-sum<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/PERMUTATION?tab=statement
