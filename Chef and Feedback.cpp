#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    string a,b,c;
	    cin>>a;
	    b="101";c="010";
	     if (a.find(b) != string::npos ||a.find(c) != string::npos )
        cout<<"Good"<<endl;
	    else cout<<"Bad"<<endl;
	}
	return 0;
}


#Question
https://www.codechef.com/problems/ERROR?tab=statement
