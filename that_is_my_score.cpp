#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum=0;
	    cin>>n;
	    int a[n];
	    int b[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i]>>b[i];
	    }
	    for(int i=1;i<9;i++)
        {
            int max=0;
            for(int j=0;j<n;j++)
                if(a[j]==i && b[j]>max)
                   max = b[j];
            sum += max;       
        }
        cout<<sum<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/WATSCORE?tab=statement
