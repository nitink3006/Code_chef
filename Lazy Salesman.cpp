#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int w,n,sum=0,result=0;
	    cin>>w>>n;
	    int arr[w];
	    for(int i=0;i<w;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+w,greater<int>());
	    
	    for(int i=0;i<w;i++)
	    {
	        if(sum<n)
	        sum=sum+arr[i];
	        else{
	        result++;
	        }
	   }
	   cout<<result<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/HOLIDAYS?tab=statement
