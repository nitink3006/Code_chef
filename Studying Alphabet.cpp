#include<bits/stdc++.h>
using namespace std;
string s,w;
int n;

int main(){
    cin>>s>>n;
    for(int i=0;i<n;i++){
        cin>>w;
        bool can_read = true;
        for(int j=0;j<w.size();j++){
            if(s.find(w[j])==string::npos){
                can_read = false;
                break;
            }
        }
        if(can_read) cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}



#Question
https://www.codechef.com/problems/ALPHABET
