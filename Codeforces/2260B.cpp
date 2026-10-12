#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <queue>
#include <stack>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;
int main (){
    ll t;
    cin>>t;
    while(t--){
       ll x,y,k,ans =0,o,p,z=0;
       cin>>x>>y>>k;
       z=k;
       for(ll i =0;i<z;i++){
        o = x+i, p=y+i;
        if(2*o>p){
            x = p%o;
            break;
        }
        ans+= p%o;
        k--;
       }
       ans+=(k)*x;
       cout<<ans<<endl;
    }
}