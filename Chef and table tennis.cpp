#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int a=0,b=0;
	    for(int i=0;i<s.size();i++)
	    {  
	        if(s[i]=='1')
	        a++;
	        else
	        b++;
	    }
	    if(a>=b)
	    cout<<"WIN"<<endl;
	    else
	    cout<<"LOSE"<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/TTENIS?tab=statement
