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
#define pb push_back
using namespace std;

const int N = 1e5+2, MOD = 1e9+7;
int main(){
fast;
tt{
    int n, m, k;
    cin >> n >> m;
    vector<int> v;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            v.push_back(max(i, n - i - 1) + max(j, m - j - 1));
    sort(v.begin(), v.end());
    for (int i = 0; i < n * m; ++i) 
        cout << v[i] << " ";
    cout << "\n";
}
    return 0;
}