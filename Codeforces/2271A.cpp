#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        bool fl = true;
        ll ans  = 0;
        if(b>a+1){
            ans = -1;
        }
        else if((a-b)%2==0){
            ans = a;
        }
        else{
            ans = a+1;
        }
        cout<<ans<<endl;
    }
}