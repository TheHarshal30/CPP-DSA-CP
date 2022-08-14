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
int main(){
fast;
    tt{
        ll n;
        cin>>n;
        deque<ll> v;
        for(ll i = 1;i<=n;i++) {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll ans[n+1] = {};
        for(int i=n;i>0;i--){
            while(v.back() !=i){
                v.push_back(v.front());
                v.pop_front();
                ans[i]++;
            }
            v.pop_back();
        }
        for(ll i =1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}