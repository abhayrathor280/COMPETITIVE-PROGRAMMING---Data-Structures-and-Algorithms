#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>freq(n+1,0);
        for(ll i =0;i<n;i++){
            ll x;
            cin>>x;
            freq[x]++;
        }
        bool fl = false;
        for(ll i=0;i<n;i++){
            if(freq[i]<2*k){
                if(freq[i]==2*k-1){
                    fl = true;
                }
                break;
            }
        }
        if(fl){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}