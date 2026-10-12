#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll nxt(ll p){

    ll sum=0;

    while(p!=0){

        ll d=p%10;

        sum+=d*d;

        p/=10;
    }

    return sum;
}

pair<ll,ll> fun(ll p){

    ll stepct=0;

    while(p!=1 && p!=4){

        p=nxt(p);

        stepct++;
    }

    return {p,stepct};
}

int main(){

    ll t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;

        map<ll,ll> mp;

        ll one=0;

        for(ll i=0;i<n;i++){

            ll x;

            cin>>x;

            pair<ll,ll> p=fun(x);

            if(p.first==1){

                one++;

            }
            else{

                mp[p.second%8]++;

            }
        }

        ll ans=one*(one-1)/2;

        for(auto x:mp){

            ll cnt=x.second;

            ans+=cnt*(cnt-1)/2;
        }

        cout<<ans<<endl;
    }
}