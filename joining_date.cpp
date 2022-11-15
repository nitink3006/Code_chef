#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int k,n,c=0;
        cin>>n>>k;
        for(int i=k;i<n;i++){
        if(i%5==0)
        c++;
     }
     cout<<c<<endl;
    }
	return 0;
}




#Question 
https://www.codechef.com/problems/JOINING?tab=statement
