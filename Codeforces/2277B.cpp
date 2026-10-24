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
        bool fl = false;
        for(ll i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                fl =true;
            }
        }
        if(!fl){
            for(ll i =0;i<n;i++){
                if(a[i]<=n-1){
                    fl = true;
                    break;
                }
            }
        }
        if(fl){
            cout<<n<<endl;
        }
        else{
            cout<<0<<endl;
        }
}
}