#include <iostream>
using namespace std;

string jump()
{
    long long int a;
    cin>>a;

    if(a%3==0 || (a-1)%6==0) return "yes";
    else return "no";
}

int main() {
	cout<<jump();
	return 0;
}


#Question
https://www.codechef.com/problems/OJUMPS?tab=statement
