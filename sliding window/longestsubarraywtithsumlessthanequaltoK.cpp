//longest subarray with sum <=k (contain only +ve)
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
    int n,k; cin>>n>>k; vi v(n); cia(v);
    int l=0,r=0,sum=0,mx=0;
    while(r<n){
        sum+=v[r];
        //yha pr while (sum>k) bhi use kr skte the but if we got max length then why settle for less , always search for greater length possibilty
        if(sum>k){
            sum -=v[l];
            l++;
        }
        if(sum<=k){
            mx = max(mx , r-l+1);
        }
        r++;
    }
    cout<<mx;
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