/* Code by Harshal Rudra(harshal_3073)*/
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
#define rep(i,n) for(int i=0;i<n;i++)
#define ll long long int
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define vll vector<ll>
#define tt ll t; cin>>t; while(t--)
#define timetaken cerr<<fixed<<setprecision(10);cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl
using namespace std;

int main(){
fast;
    int n;
    cin>>n;
    vector<string> v(n);
    rep(i,n) cin>>v[i];   
    string ans;
    int count=0;
    int maxx=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(v[j] == v[i]){
                count++;
            }
        }
        maxx = max(count,maxx);
        if (maxx==count){
            ans = v[i];
        }
    }
    cout<<ans<<endl;
    timetaken;
    return 0;
}