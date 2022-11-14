#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int sum=0;
	    int arr[100];
	    for(int i=0;i<5;i++){
	        cin>>arr[i];
	        sum=sum+arr[i];
	    }
	    if(sum==2){
	        cout<<"Middle Developer"<<endl;
	    }
    
	    else if(sum==3){
	        cout<<"Senior Developer"<<endl;
	    }
	    else if(sum==4){
	        cout<<"Hacker"<<endl;
	    }
	    else if(sum==5){
	        cout<<"Jeff Dean"<<endl;
	    }
	    else if(sum==1){
	        cout<<"Junior Developer"<<endl;
	    }
	    else cout<<"Beginner"<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/problems/CCOOK
