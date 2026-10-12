#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        ll score=0;
        if(n>2*(k-1)){
            for(ll i = k;i<=n-k+1;i++){
                score+=a[i];
            }
            for(ll i = 1;i<=k-1;i++){
                score+=max(a[i],a[n-i+1]);
            }
        }
        else{
            ll p = n-k+1;
            for(ll i =1;i<=p;i++){
                score+=max(a[i],a[n-i+1]);
            }
        }
        cout<<score<<endl;
    }
    
}