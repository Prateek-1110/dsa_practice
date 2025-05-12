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
    string s ; cin>>s;
    vi v(256,-1);
    int left = 0 ,right = 0;
    int n = s.size();
    int len = 0;
    while(right<n){
        if(v[s[right]]!=-1) left = max(v[s[right]]+1,left);
        v[s[right]]=right;
        len  = max(len , right-left+1);
        right++;
    }
    cout<<len;
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