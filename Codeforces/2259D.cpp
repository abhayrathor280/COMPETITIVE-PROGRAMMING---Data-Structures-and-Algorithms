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
        ll n,z=0;
        cin>>n;
        ll a[n];
        for(ll i =0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                z++;
            }
        }
        bool flag = true;
        if(z==1){
            cout<<"NO";
        }
        else{
            cout<<"YES"<<endl;
            for(ll i=0;i<n;i++){
                if(a[i]==0 && flag){
                    cout<<"A";
                    flag = false;
                }
                else if(a[i]==0 && !flag){
                    cout<<"B";
                }
                else{
                    cout<<"C";
                }
            }
        }
        cout<<endl;
    }
}