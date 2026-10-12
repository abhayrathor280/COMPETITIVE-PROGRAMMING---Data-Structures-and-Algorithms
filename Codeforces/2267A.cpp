#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll n;
       cin>>n;
      
       char c;
       cin>>c;
       string s;
       cin>>s;
       ll j=0,k=n-1,ans =0;
       for(ll i=0;i<n/2;i++){
        if(s[i]!=s[k]){
            if(s[i]==c || s[k]==c){
                ans++;
            }
            else{
                ans+=2;
            }
        }
        k--;
        
       }
       cout<<ans<<endl;
    }
}