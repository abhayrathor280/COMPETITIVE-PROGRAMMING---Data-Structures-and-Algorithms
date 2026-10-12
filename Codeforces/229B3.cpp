#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll p){
    ll sum =0;
    while(p!=0){
        sum+=p%10 *(p%10);
        p/=10;
    }
    return sum;
}
ll stpct(ll p){
    ll st=0;
    while(p!=1 && p!=4){
        p=fun(p);
        st++;
    }
    if(p==1){
        return -1;
    }
    else{
        return st%8;
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
    cin>>n;
    ll a[n];
    vector<ll>k;
    for(ll i =0 ;i<n;i++){
        cin>>a[i];
        k.push_back(stpct(a[i]));
    }
    ll ctr=1,ans=0;
    sort(k.begin(),k.end());
    vector<ll>g;
    for(ll i =1;i<n;i++){
        if(k[i-1]==k[i]){
            ctr++;
        }
        else{
            ans+=ctr*(ctr-1)/2;
            ctr=1;
        }
    }
    ans+=ctr*(ctr-1)/2;
    cout<<ans<<endl;
    }
    
}