#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 0, cnt=0,prefix=0;
        int i=0;
        while(i<n)
        {
            if(s[i]=='1')
            {
                prefix++;
            }
            else
            {
                break;
            }
            i++;
        }
        while(i<n)
        {
            if(s[i]=='1')
            {
                cnt++;
            }  
            else
            {
                cnt=0;
            } 
            ans=max(ans,cnt);
            i++;
        }
        cout<<ans+prefix<<endl;
    }
	return 0;
}


#Question
https://www.codechef.com/problems/PREFONES?tab=statement
