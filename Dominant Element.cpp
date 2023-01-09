#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	     int arr[n+1]={0};
         int max=INT_MIN;
         for(int i=0;i<n;++i){
             int x;
             cin>>x;
             if(max<=x)
             max=x;
        
             arr[x]++;
            }
            sort(arr,arr+max+1);
            if(arr[max-1]==arr[max])
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/DOMINANT2?tab=statement
