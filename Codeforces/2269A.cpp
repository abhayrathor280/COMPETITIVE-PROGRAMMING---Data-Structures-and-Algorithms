#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n,k;
       cin>>n>>k;
       ll ans = (k-1)*2;

       n-=k-1;
       ll p =1;
       for(ll i =0;i<n;i++){
        p*=2;
       }
       cout<<ans+p<<endl;
    }
}