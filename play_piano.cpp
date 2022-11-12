#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int k=0;
    for(int i=0;i<s.length()-1;i+=2)
    {
        if(s[i]==s[i+1])
        {
            k=1;
            break;
        }
    }
    cout<<(k==0?"yes":"no")<<endl;
	}
	return 0;
}




#Questions
https://www.codechef.com/submit/PLAYPIAN?tab=statement
