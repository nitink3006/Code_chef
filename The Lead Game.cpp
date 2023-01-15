#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,winner,lead=0;
     int  player1=0;
         int player2=0;
    
    cin>>n;
    while (n>0)
    {   n--;
    int a,b;
        cin>>a;
        cin>>b;
        player1+=a;
        player2+=b;
    
        int diff= abs(player1-player2);
        if(diff>lead )
        {
            lead=diff;
        
        player1>player2?winner=1:winner=2;
        }
    }
        cout<<winner<<" ";
        cout<<lead;
	return 0;
}







#Question
https://www.codechef.com/problems/TLG?tab=statement
