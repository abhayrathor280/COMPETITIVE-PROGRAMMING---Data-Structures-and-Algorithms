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
       for(ll i =0;i<n;i++){
        if(x[i]==y[i]){
            x[i]='o';
            y[i]='o';
        }
       }
       for(ll i =0;i<n-1;i++){
        if(x[i]=='f' && x[i+1]=='f'){
            x[i]='o';
            x[i+1]='o';
        }
        if(y[i]=='f' && y[i+1]=='f'){
            y[i]='o';
            y[i+1]='o';
        }
       }
       ll g=0,h=0;
       for(ll i =0;i<n;i++){
        if(x[i]=='f' && y[i]=='o'){
            g++;
        }
        if(x[i]=='o' && y[i]=='f'){
            h++;
        }
       }
       ll r = abs(g-h);
       cout<<r<<endl;
}
}