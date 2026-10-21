#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll a[n];
       for(ll i =0;i<n;i++){
        cin>>a[i];
       }
       vector<ll>pre(n+1,0);
       for(ll i =0;i<n;i++){
        pre[i+1] = (pre[i]+a[i])%k; 
       }
       vector<ll>freq(k,0);
       ll ans  = 0;
       for(ll i = k+1;i<=n;i++){
        freq[pre[i-k-1]]++;
        ans+=freq[pre[i]];
       }
       cout<<ans<<endl;
}
}