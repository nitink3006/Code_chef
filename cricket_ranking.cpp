#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int r1,r2,w1,w2,c1,c2,x=0,y=0;
	    cin>>r1>>w1>>c1;
	    cin>>r2>>w2>>c2;
	    if(r2>r1)  x=x+1;
	    else   y+y+1;
	    if(w2>w1)   x=x+1;
	    else  y=y+1;
	    if(c2>c1)  x=x+1;
	    else  y=y+1;
	    if(x>y)   cout<<"B"<<endl;
	    else  cout<<"A"<<endl;
	}
	return 0;
}




#Question
https://www.codechef.com/problems/CRICRANK?tab=statement
