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
    if(n==0) cout<<1<<endl;
    else if(n%4==0) cout<<6<<endl;
    else if(n%4==2) cout<<4<<endl;
    else if(n%4==3) cout<<2<<endl;
    else if(n%4==1) cout<<8<<endl;
    timetaken;
    return 0;
}