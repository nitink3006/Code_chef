#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int x=1;
	    int arr[n];
	    map<int, int> mp;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        mp[arr[i]]++;
	    }
	    for(int i=n-1;i>=0;i--){
	        if(mp[arr[i]]%2){
	            cout<<"Marichka"<<endl;
	            x=0;
	            break;
	        }
	    }
	    if(x){
	        cout<<"Zenyk"<<endl;
	    }
	}
	return 0;
}


#Question
https://www.codechef.com/problems/TAKENOTLESS?tab=statement
