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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll od=0, ev1=0,ev2=0;
        for(ll i =0;i<n;i++){
            if(a[i]%2!=0){
                od++;
            }
            else if(a[i]%4==0){
                ev2++;
            }
            else{
                ev1++;
            }
        }
        cout<<max(od,max(ev1,ev2))<<endl;
    }
}