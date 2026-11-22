#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll x,p=0;
        cin>>x;
        ll ans = 0;
        for(ll i =1;i<INT_MAX;i++){
            if(i*(i+1)/2>=x){
                p = i*(i+1)/2;;
                ans = i;
                break;
            }
        }
        for(ll i = 1;i<=INT_MAX;i++){
            if(p-i>=x){
                p-=i;
                ans--;
            }
            else{
                p = i;
                break;
            }
        }
        cout<<min(ans+p,x)<<endl;
}
}