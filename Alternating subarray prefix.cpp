#include <bits/stdc++.h>
using namespace std;

bool check(int a,int b)
{
    if(a>0&&b<0||a<0&&b>0)return true;
    return false;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>dp(n,1);
        int res=1;
        for(int j=n-2;j>=0;j--)
        {
           if(check(v[j],v[j+1]))dp[j]=dp[j+1]+1;
        }
        for(auto x:dp)cout<<x<<" ";
          cout<<endl;
    }
}


#Question
https://www.codechef.com/problems/ALTARAY?tab=statement
