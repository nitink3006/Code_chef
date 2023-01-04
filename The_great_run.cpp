#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    int n,k;
 	    cin>>n>>k;
 	    int arr[n];
	    for(int i=0; i<n; i++){
 	        cin>>arr[i];
 	    }
 	    int max=0;
	   for(int i=0;i<n-k+1;i++)
	   {
	       int sum=0;
	       for(int j=i;j<k+i;j++)
	       {
	           sum += arr[j];
	       }
	       if(max<sum)
	       max=sum;
	   }
	   cout << max << endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PROC18A?tab=statement
