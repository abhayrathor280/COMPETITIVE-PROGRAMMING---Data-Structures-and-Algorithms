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
        ll p = 0;
        for(ll i =0;i<n;i++){
            if(p==a[i]){
                p++;
                i=-1;
            }
            else if(i==n-1){
                break;
            }
        }
        sort(a,a+n);
        vector<ll>v;
        ll x =0;
        for(ll i =0;i<=a[n-1];i++){
            ll fr = 0;
            for(ll j =0;j<n;j++){
                if(x==a[j]){
                    fr++;
                }
            }
            v.push_back(fr);
            x++;
        }
        ll ans = 101;
        ll spare = 0;
        for(ll i =0;i<v.size();i++){
            if(v[i]==0){
                ans = i;
            }
            else{
                if(v[i]+spare<k){
                    ans=i;
                    break;
                }
                if(v[i]>k){
                    spare+=v[i]-k;
                }
                if(v[i]<k && v[i]+spare>=k){
                    spare-=k-v[i];
                }
            }
        }
        cout<<min(p,ans)<<endl;
}
}