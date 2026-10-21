#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ans = 0;
        ll d = a-b;
        if(a<=b){
            ans = -1;
        }
        else{
            ans  = min(b,d);
        }
        cout<<ans<<endl;
    }
}