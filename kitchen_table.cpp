#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int sum=0;
	    int arr1[n+1]={0},arr2[n+1]={0};
	    for(int i= 1;i<n+1;i++){
	        cin>>arr1[i];
	    }
	    for(int i= 1;i<n+1;i++){
	        cin>>arr2[i];
	    }
	    for(int i=1;i<n+1;i++){
	        if((arr1[i]-arr1[i-1])>=arr2[i])
	        sum+=1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}



#Questions
https://www.codechef.com/submit/KTTABLE?tab=statement
