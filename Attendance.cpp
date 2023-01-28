#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string name[n];
	    string surname[n];
	    string v[n];
	    for(int i=0;i<n;i++){
	        cin>>name[i]>>surname[i];
	    }
	    for(int i=0;i<n;i++){
	        v[i]=name[i];
	    }
	    
	    for(int i=0;i<n;i++){
	        int count=-1;
	        for(int j=0;j<n;j++){
	            if(name[i]==name[j]){
	                count++;
	            }
	            if(count==1){
	                cout<<name[i]<<" "<<surname[i]<<endl;
	                break;
	            }
	            if(j==n-1){
	                cout<<name[i]<<endl;
	            }
	        }
	    }
	}
	return 0;
}


#Question
https://www.codechef.com/problems/ATTND?tab=statement
