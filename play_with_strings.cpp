#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,sum1=0,sum2=0;
        cin>>n;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        
        for(int i=0; i<n ; i++)
        {
            if(s1[i]=='1') 
            {
                sum1++;
            }
            if(s2[i]=='1') 
            {
                sum2++;
            }
        }
        
        if(sum1==sum2){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PLAYSTR?tab=statement
