#include<bits/stdc++.h>
#include<map>
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
      vector<ll>tr;
      map<ll,ll>freq;
      for(ll i=0;i<n-4;i++){
        tr.push_back(a[i]+a[i+2]-a[i+4]);
        freq[a[i]+a[i+2]-a[i+4]]++;
      }
      ll ans = 0;
      for(auto x : freq){
        ll c = x.second;
        if(c>1){
            ans+=c*(c-1)/2;
        }
      }
      for(ll i =0;i<tr.size();i++){
        if(i+2<tr.size() && tr[i]==tr[i+2]){
            ans--;
        }
        if(i+4<tr.size() && tr[i]==tr[i+4]){
            ans--;
        }
      }
      cout<<ans<<endl;
}
}