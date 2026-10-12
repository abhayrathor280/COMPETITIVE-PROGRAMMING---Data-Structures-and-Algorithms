#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;
    cin >> t;

    while (t--) {
        ll x, y, k;
        cin >> x >> y >> k;

        while (k > 0 && x < y) {
            ll p = y - (x % y);

            if (p > k) {
                x += k;
                k = 0;
                break;
            }

            x += p;
            k -= p;

            if (x == y) {
                break;
            }

            x /= y;
            k--;
        }

        if (k > 0) {
            x += k % (y - 1);
        }

        cout << x << '\n';
    }
}