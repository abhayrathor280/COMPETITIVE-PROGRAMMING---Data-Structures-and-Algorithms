#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

bool check(ll n, ll k, ll target,
           vector<ll>& a, vector<ll>& b, vector<ll>& c) {
    ll used = 0;

    for (ll i = 0; i < n; i++) {
        ll sum = a[i] + b[i] + c[i];

        if (sum >= target) continue;

        if (a[i] == b[i] && b[i] == c[i]) {
            return false;
        }

        ll ops = target - sum;

        if (a[i] <= b[i] && b[i] <= c[i]) {
            ll unlock = min(b[i] - a[i], c[i] - b[i]) + 1;
            ops += 2 * unlock;
        }

        used += ops;

        if (used > k) return false;
    }

    return true;
}

int main() {
    ll T;
    cin >> T;

    while (T--) {
        ll n, k;
        cin >> n >> k;

        vector<ll> a(n), b(n), c(n);
        ll mnSum = LLONG_MAX;

        for (ll i = 0; i < n; i++) {
            cin >> a[i] >> b[i] >> c[i];
            mnSum = min(mnSum, a[i] + b[i] + c[i]);
        }

        ll low = mnSum;
        ll high = mnSum + k;
        ll ans = mnSum;

        while (low <= high) {
            ll mid = low + (high - low) / 2;

            if (check(n, k, mid, a, b, c)) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}