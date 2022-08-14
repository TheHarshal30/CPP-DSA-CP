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
void ans(vll v,ll n, map<ll,ll>mp){
    for(int i=1;i<=n;i++){
        if(mp[i]==0){
            cout<<"NO"<<endl;
            return ;
        }
    }
    cout<<"YES"<<endl;
    return;
}
const int N = 1e5+2, MOD = 1e9+7;
vll dp(N);
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        vll v(n);
        rep(i,n) cin>>v[i];
        map<ll,ll> mp;
        rep(i,n){
            ll x = v[i];
            while(x>0){
                if(x>=1 && x<=n && mp[x]==0){
                    mp[x] = 1;
                    break;
                }
                x/=2;
            }
        }
        ans(v,n,mp);
    }
    return 0;
}