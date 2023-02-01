
https://www.codechef.com/problems/COINS


#include <bits/stdc++.h>
using namespace std;

    long coin(long n)
    {
     if(n>=12)
            return coin(n/2) + coin(n/3)+ coin( n/4);
     else
            return n;
    }
    int main(){
        long n; 
        while(cin>>n)
            cout<<coin(n)<<endl;
	   return 0;
    }
