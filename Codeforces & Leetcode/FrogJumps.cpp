/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define scanit for(int i=0;i<n;i++) cin>>v[i]
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    tt{
        string s;
        cin>>s;
        vll v;
        v.push_back(0);
        rep(i,s.length()){
            if(s[i]=='R') v.push_back(1+i);
        }
        v.push_back(s.size()+1);
        ll ans =0;
        for(int i=0;i<v.size()-1;i++){
            ans = max(ans,v[i+1]-v[i]);
        }
        cout<<ans<<endl;
    }
    return 0;
}