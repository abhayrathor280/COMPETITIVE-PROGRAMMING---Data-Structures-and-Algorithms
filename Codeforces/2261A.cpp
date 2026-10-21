#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll cnt =0,idx1=-1,idx2=0;
        for(ll i =0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
                if(idx1==-1){
                    idx1=i;
                }
                else{
                    idx2 = i;
                }
            }
        }
        ll ans = 0;
        if(cnt ==1){
            ans = 0;
        }
        else if(cnt == 2 ){
            ans = 1;
        }
        else{
            ans = idx2-idx1;
        }
        cout<<ans<<endl;
    }
}



