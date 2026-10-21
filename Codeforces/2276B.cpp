#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       ll n = s.length();
       ll ans  = 1;
       ll ch = 0,k=0;
       bool a = false,b= false;
       for(ll i =1;i<n-1;i++){ 
        if(s[i-1]==s[i+1]){
            if(s[i]==s[i-1]){
                a = true;
            }
            else{
                b = true;
            }
        }
    }
      ans += a+b;
      cout<<ans<<endl;
}
}