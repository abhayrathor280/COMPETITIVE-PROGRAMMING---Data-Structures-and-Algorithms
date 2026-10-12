
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main (){
    ll t;
    cin>>t;
    while(t--){
       ll x,y,k=0;
       cin>>x>>y;
       while(x>0){
        if(x & y ==0){
            break;
        }
        x--;
        y++;
        k++;
       }
       cout<<x+y<<" "<<k<<endl;
    }
}