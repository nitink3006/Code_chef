#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1' ||s[i]=='2' ||s[i]=='3' ||s[i]=='4' ||s[i]=='5' ||s[i]=='6' ||s[i]=='7' ||s[i]=='8' ||s[i]=='9' ||s[i]=='0')
            sum=sum+s[i]-48;
        }
        cout<<sum<<endl;
    }
    return 0;
}



#Question
https://www.codechef.com/problems/KOL15A?tab=statement
