#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
       string x,y;
       cin>>x;
       cin>>y;
       ll k=0,l=0;
       for(ll i =0;i<n;i++){
        if(x[i]=='f'){
            k++;
        }
        if(y[i]=='f'){
            l++;
        }
       }
       cout<<(k+l)%2<<endl;
}
}