#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1>>s2;
	    bool check = false;
        int j = 0;
        if(s1.size() < s2.size()) swap(s1,s2);
        for(int i=0;i<s1.size();i++){
            if(s1[i] == s2[j]) j++;
            if(j == s2.size()) {
                check = true;
                break;
            }
        }
        if(check) cout << "YES" << endl;
        else cout << "NO" << endl;
	    }
	return 0;
}


#Question
https://www.codechef.com/problems/NAME2?tab=statement
