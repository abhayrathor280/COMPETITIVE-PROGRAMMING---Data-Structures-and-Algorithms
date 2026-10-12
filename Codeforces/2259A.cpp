#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
    ll t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        ll ans =0;
        bool flag = false;
        for(ll i =0;i<n;i++){
            if(s[i]=='0'){
                flag = true;
            }
            if((i+1)%k==0){
                if(flag == true){
                    flag = false;
                }
                else{
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
}