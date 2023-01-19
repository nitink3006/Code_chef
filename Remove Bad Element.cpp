#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,i;
        cin>>n;
        int a[n],count=1,max_count=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
                count++;
            if(count>max_count)
                max_count=count;
            if(a[i]!=a[i+1])
                count=1;    
        }
        cout<<(n-max_count)<<endl;
    }
	return 0;
}



#Question
https://www.codechef.com/problems/REMOVEBAD?tab=statement
