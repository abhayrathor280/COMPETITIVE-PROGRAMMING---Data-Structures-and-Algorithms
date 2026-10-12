#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans  = 1;
        while(true){
            ll sum = 0;
            for(ll i =1;i<=ans;i++){
                sum+= i * (ans/i);
            }
            if(sum>=n){
                break;
            }
            ans++;
        } 
        ll rem = n,val =1;
        vector<ll>v;
        for(ll i=ans;i>0;i--){
            ll cnt = min(ans/i,rem/i);
            for(ll j=0;j<cnt;j++){
                for(ll k = 0;k<i;k++){
                    v.push_back(val);
                }
                val++;
            }
            rem-=cnt*i;
        }
        cout<<ans<<endl;
        for(ll i =0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
