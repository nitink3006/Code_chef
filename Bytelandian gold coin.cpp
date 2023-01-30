
https://www.codechef.com/problems/COINS


#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int x;
        if (n < 12) x = n;
        else x = max(n, (n / 2) + (n / 3) + (n / 4));
        cout << x << endl;
    }
    return 0;
}

