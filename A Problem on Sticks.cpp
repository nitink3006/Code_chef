#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    int count=0;
	    int max=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    for (int i = 0; i < n; i++)
	    {
	        if(arr[i]>max)
	        {
	            count++;
	            max = arr[i];
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/TREE2?tab=statement
