#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        k=n-k+1;
        ll a[n];
        for(ll i =0;i<n;i++){
            cin>>a[i];
        }
        bool fl = false;
        ll x =0,ind =-1,ct=0;
        for(ll i =0;i<k;i++){
            if(a[i]==x){
                x++;
                i=-1;
                ct++;
            }
            else if(i==k-1){
                fl = true;
                break;
            }
        }
        for(ll i =0;i<n;i++){
            if(a[i]==x){
                ind = i;
                break;
            }
        }
        ll r =-1;
        for(ll i =0;i<k;i++){
            if(a[i]>=k){
                r = i;
            }
        }
        if(ct!=k){
            cout<<r+1<<" "<<ind+1<<endl;
        }
        else{
            cout<<-1<<endl;
        }

}
}