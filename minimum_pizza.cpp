#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
       int f,s;
       cin>>f>>s;
       
       if((f*s)%4==0){
           cout<<(f*s)/4<<endl;
       }
       else {
            cout<<((f*s)/4)+1<<endl;
       }
    }
	return 0;
}



#Questions
https://www.codechef.com/submit/MINPIZZA
