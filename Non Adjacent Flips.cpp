#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int c1=0,c11=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='1' && s[i+1]=='1'){
				c11++;
			}
			else if(s[i]=='1'){
				c1++;
			}
		}
		if(c1!=0 &&c11!=0){
			cout<<"2"<<endl;
		}
		else if(c11==0 && c1!=0){
			cout<<"1"<<endl;
		}
		else if(c1==0){
			cout<<"0"<<endl;
		}
	}
	return 0;
}


#Question
https://www.codechef.com/problems/NONADJFLIP
