#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k,c=0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        if(arr[i]>k){
            c++;
        }
        }
        cout<<c<<endl;
    }
	return 0;
}


#Question
https://www.codechef.com/problems/DOLL?tab=statement
