#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    for(int i = 0; i < str.size(); i++){
	        if(str[i] == 'p' && str[i+1] == 'a' && str[i+2] == 'r'&& str[i+3] == 't' && str[i+4] == 'y' && i+4 < str.size()){
	            str[i+2] = 'w';
	            str[i+3] = 'r';
	            str[i+4] = 'i';
	        }
	    }
	    cout<<str<<endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/PAWRI?tab=statement
