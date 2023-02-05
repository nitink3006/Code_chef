#include <iostream>
#include <set>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        set<int> st;
        for (int i = a; i <= b; ++i) {
            st.insert(i);
        }
        for (int i = c; i <= d; ++i) {
            st.insert(i);
        }
        int ans = st.size();
        cout << ans << endl;
    }
	return 0;
}



#Question
https://www.codechef.com/problems/TWORANGES?tab=statement
