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
    double n,l;
    cin>>n>>l;
    vector<double> v(n);
    rep(i,n) cin>>v[i];
    sort(v.begin(),v.end());
    double diff=0;
    for(int i = 1 ; i < n ; i++)
    {
        double a=v[i]-v[i-1];
        diff=max(diff,a/2);
    }
    if(v[0]!=0){
        double b = v[0];
        diff=max(b,diff);
    }
    if(v[n-1]!=l){
        double b=l-v[n-1];
        diff=max(diff,b);
    }
    cout<<setprecision(9)<<diff<<endl;
    timetaken;
    return 0;
}