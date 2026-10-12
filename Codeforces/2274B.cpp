#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i =0;i<n;i++){
            cin>>a[i];
        }
        
        ll ans = a[0];
        ll smin= a[0],smax=a[0];
        for(ll i=1;i<n;i++){
            ll maxVal = max({a[i]-smin,a[i]+smax,a[i]});
            ans = max(maxVal,ans);
            smin = min({smin+ a[i]+smin,smin+ a[i] - smin,smin+a[i]});
            smax = max({smax+a[i]+smax,smax+a[i]-smax,smax+a[i]});
        }
        cout<<ans<<endl;
    }
}