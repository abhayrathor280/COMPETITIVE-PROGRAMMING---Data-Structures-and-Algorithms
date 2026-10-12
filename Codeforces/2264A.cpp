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
        vector<ll>u,ind;
        bool fd = false;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(i+1!=a[i]){
                fd = true;
                u.push_back(a[i]);
                ind.push_back(i+1);
            }
        }
        bool ans = true;
        ll p = u.size()-1;
        for(ll i =0;i<u.size();i++){
            if(u[i]!=ind[p]){
                ans = false;
                break;
            }
            p--;
        }
        if(!fd || ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}