#include <iostream>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        string s; 
        cin>>s;
        long long zero=0,one=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='0') zero++;
            else one++;
        }
        if(s.size()==2) cout<<s<<endl; 
        else{
        string temp="";
        while(zero--)temp+='0';
        while(one--)temp+='1';
        cout<<temp<<endl;}
    }
	return 0;
}


#Question
https://www.codechef.com/problems/EVENSPLIT?tab=statement
