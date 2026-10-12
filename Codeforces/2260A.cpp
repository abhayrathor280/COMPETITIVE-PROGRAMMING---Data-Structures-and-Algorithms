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
        ll n,z=0,e=0,o=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                z++;
            }
            else{
                o++;
            }
        }
        if(a[0]==0){
            e++;
        }
        if(a[n-1]==0){
            e++;
        }
        if(e==2){
            cout<<0<<endl;
        }
        else if(z<2){
            cout<<-1<<endl;
        }
        else{
            if(e==0){
                cout<<2<<endl;
            }
            if(e==1){
                cout<<1<<endl;
            }
        }
    }
}