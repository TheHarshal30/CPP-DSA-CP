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
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x = n*n;
        vector<int> v;
        for(int i=1;i<=(n*n);i++){
            if(i%2!=0){
                v.push_back(i);
            }
        }
        for(int i=1;i<=(n*n);i++){
            if(i%2==0){
                v.push_back(i);
            }
        }
        int count=0;
        for(int i=0;i<v.size();i++){
            if(count<n){
                cout<<v[i]<<" ";
                count++;
            }
            else{
                cout<<endl;
                cout<<v[i]<<" ";
                count=0;
            }
        }
        cout<<endl;
    }
    timetaken;
    return 0;
}