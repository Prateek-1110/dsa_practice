// ques is about finding longest subarray with atmost  2 unique elements
//https://leetcode.com/problems/fruit-into-baskets/
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
    int n ; cin>>n;
    vi v(n); cia(v);
    int l=0,r=0,mxlen=0; map<int,int>mpp;
    while(r<n){
        mpp[v[r]]++;
        while(mpp.size()>2){
             mpp[v[l]]--;
                if(mpp[v[l]]==0)mpp.erase(mpp[v[l]]);
                l++;
        }
        if(mpp.size()<=2){
            mxlen=max(mxlen,r-l+1);
        }
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