#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin >> t;
    while(t--) {
        ll n;
        cin>>n;
        for(ll i=5;i>0;i--){
            for(ll j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(ll j = 1;j<=(2*i-1);j++){
                cout<<"*";
            }
            for(ll j=1;j<=n-i;j++){
                cout<<" ";
            }

            cout<<endl;
        }
    }
}f