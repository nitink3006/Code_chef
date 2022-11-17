#include <iostream>
using namespace std;

bool isPrime(int n)
{
    
    if (n <= 1)
        return false;
        
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
int main() {
	int t,p=1;
	cin>>t;
	while(p<=t){
	    int a,b;
	    cin>>a>>b;
	    if(isPrime(a+b)==true)
	    {
	        cout<<"Alice"<<endl;
	    }
	    else
	    {
	         cout<<"Bob"<<endl;  
	    }
	    p++;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PRIMEDICE?tab=statement
