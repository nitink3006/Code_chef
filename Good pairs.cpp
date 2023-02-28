#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	long long int n;
	cin >> n;
	long long int a[n];
    map<long long int,long long int> m;
	for(long long int i=0 ; i<n ; i++){
	    cin >> a[i];
	      m[a[i]] ++ ;
	    
	}
	long long int c =0 ;
    for(auto u : m){
          c = c+(u.second*(u.second-1)) / 2;
     }
    cout << c << endl;
	}
	return 0;
}



#Question
https://www.codechef.com/problems/EQPAIR?tab=statement
