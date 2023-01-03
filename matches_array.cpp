#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	int arr[]={6,2,5,5,4,5,6,3,7,6};
	while(t--){
	    int a,b,c;
	    cin>>a>>b;
	    int sum=a+b;
	    int num=0;
	    while(sum>0){
	        c = sum%10;
	        num = num + arr[c];
	        sum = sum/10;
	    }
	    cout<<num<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/MATCHES?tab=statement
