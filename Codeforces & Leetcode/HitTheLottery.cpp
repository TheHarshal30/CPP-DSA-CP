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
    ll n;
    cin>>n;
    ll count=0;
    while(true){
    if(n==0){
        cout<<count<<endl;
        return 0;
    }
    else if(n>=100) {
        n -= 100;
        count++;
    }
    else if(n>=20 && n<100){
        n -= 20;
        count++;
    }
    else if(n>=10 && n<20){
        n -= 10;
        count++;
    }
    else if(n>=5&&n<10){
        n -= 5;
        count++;
    }
    else if(n>=1 && n<5){
        n-=1;
        count++;
    }
    }
    timetaken;
}