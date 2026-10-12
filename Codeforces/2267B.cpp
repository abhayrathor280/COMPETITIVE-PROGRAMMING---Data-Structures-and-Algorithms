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
       
       sort(a, a+n, greater<ll>());
       cout<<a[0]<<" ";
       vector<ll>p;
       for(ll i =1;i<n;i++){
        if(a[i]==a[i-1]){
            p.push_back(a[i]);
        }
        else{
            cout<<a[i]<<" ";
        }
       }
       while(!p.empty()){

            vector<ll> q;

            cout<<p[0]<<" ";

            for(ll i=1;i<p.size();i++){

                if(p[i]==p[i-1]){
                    q.push_back(p[i]);
                }
                else{
                    cout<<p[i]<<" ";
                }
            }

            p=q;
        }
       cout<<endl;
    }
}