#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,c=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++){
            int k=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j])
                k++;
            }
            c=max(c,k);
        }
        cout<<n-c<<endl;
	    
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PAIREQ?tab=statement
