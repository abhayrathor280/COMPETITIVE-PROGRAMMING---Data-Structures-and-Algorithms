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
        bool fl=  true;
        for(ll i=0;i<n;i++){
            if(fl && a[i]==-1){
                a[i]=1;
            }
            if(a[i]==1){
                fl = false;
            }
        }
        fl=true;
        for(ll i=n-1;i>-1;i--){
            if(fl && a[i]==-1){
                a[i]=1;
            }
            if(a[i]==1){
                fl = false;
            }
        }
        for(ll i=0;i<n;i++){
            if(a[i]==-1){
                a[i]=0;
            }
            cout<<a[i]<<" ";
        }
        cout<<endl;

        
    }
}