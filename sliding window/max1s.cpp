#include <bits/stdc++.h>
#define cia(x) for(int i = 0;i<x.size();i++)cin>>x[i];
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define sz(x) x.size() 
#define srt(x) sort(x.begin(), x.end())
#define rsrt(x) sort(x.rbegin(), x.rend())
#define pb push_back
#define debug(x) cerr << #x << " "<<x;cerr << endl;
#define bakchodi ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
using namespace std;
void solve() {
    int n,k ; cin>>n>>k; vi v(n); cia(v);
    int mxlen = 0,l=0,r=0,zeroes=0;int len = 0;
    while(r<n){
        if(v[r]==0)zeroes++;
        while(zeroes>k){
            if(v[l]==0) zeroes--;
             l++;
        }  
        len = r-l+1;
        mxlen = max(len ,mxlen);
        r++;
    }
    cout<<mxlen;
}
int main() {
    bakchodi;
    #ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
    #endif
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}