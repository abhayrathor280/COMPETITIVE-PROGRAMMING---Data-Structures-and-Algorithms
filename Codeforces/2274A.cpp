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
      for(ll i=0;i<n;i++){
        cin>>a[i];
      }
      ll ans =0;
      for(ll i = n-1;i>-1;i--){
        ll p = abs(a[i]-ans);
        ll k =1;
        if(a[i]<ans){
            k=-1;
        }
        ll m = 2*p*k;
        ans+=m;
      }
      cout<<ans/2<<endl;
    }
}