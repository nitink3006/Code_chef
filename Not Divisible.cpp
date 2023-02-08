#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            if(i%2==0){
                arr[i]=2;
            }
            if(i%2==1){
                arr[i]=1;
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/NOTDIVISIBLE?tab=statement
