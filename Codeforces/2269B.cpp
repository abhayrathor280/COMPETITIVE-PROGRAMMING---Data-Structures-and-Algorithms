#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll fun(ll p){
    ll stepct=0;
    ll sum =0;
    while(p!=0){
        sum+=p%10 * (p%10);
        p/=10;
        stepct++;
    }
    if(sum/10==0){
        return sum;
    }
    else{
        return fun(sum);
    }
}
ll stepcount(ll p){
    ll stepct=0;
    ll sum =0;
    while(p!=0){
        sum+=p%10* (p%10);
        p/=10;
        
    }
    stepct++;
    if(sum/10==0){
        return stepct;
    }
    else{
        return 1+stepcount(sum);
    }
}
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       ll a[n];
       vector<ll>sd;
       vector<ll>st;
       for(ll i =0;i<n;i++){
        cin>>a[i];  
        sd.push_back(fun(a[i])); 
        st.push_back(stepcount(a[i]));
       }
        ll ans=0;

        for(ll i=0;i<n;i++){

            for(ll j=i+1;j<n;j++){

                if(sd[i]==sd[j]){

                    if(sd[i]==1){
                        ans++;
                    }
                    else if(st[i]==st[j]){
                        ans++;
                    }

                }

            }

        }

        cout<<ans<<endl;
       
    }
}