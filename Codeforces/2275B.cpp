#include<bits/stdc++.h>
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
    vector<ll>p(n,0);
    vector<ll>no;
    vector<ll>left;
    ll one = 0;
    for(ll i =0;i<n;i++){
        if(s[i]=='1'){
            one++;
            no.push_back(i);
        }
        if(s[i]=='2' && one !=0){
            one--;
            no.pop_back();
            left.push_back(i);
        } 
    }
    for(ll i =0;i<left.size();i++){
        no.push_back(left[i]);
    }
    sort(no.begin(),no.end());
    cout<<no.size()<<endl;
    if(no.size()==0){
        cout<<endl;
    }
    for(ll i = 0;i<no.size();i++){
        cout<<no[i]+1<<" ";
    }
    cout<<endl;
    
}
}