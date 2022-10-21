#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int D,L,R;
        cin>>D>>L>>R;
         if(D<=R && D>=L)
	    {
	        cout<<"Take second dose now"<<endl;
	    }
	    else if(D>=R && D>=L)
	    {
	        cout<<"Too Late"<<endl;
	    }
	    else if(D<=R && D<=L)
	    {
	        cout<<"Too Early"<<endl;
	    }
    }
   return 0;
}



#Questions
https://www.codechef.com/LP1TO201/problems/VDATES?tab=statement
