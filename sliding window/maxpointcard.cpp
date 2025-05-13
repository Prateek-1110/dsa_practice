//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
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
    int n , k ; cin>>n>>k; vi v(n); cia(v);
    int l_sum = 0, r_sum = 0, max_sum = 0, r_index = n-1;
    for(int i = 0;i<k;i++){
        l_sum += v[i];
    }
    max_sum = l_sum;
    for(int i = k-1;i>=0;i--){
        l_sum -=v[i];
        r_sum += v[r_index];
        r_index--;
        max_sum = max(max_sum , l_sum+r_sum);
    }
    cout<<max_sum;
}
// alternate approach can be 
/*
void solve() {
    int n, k; 
    cin >> n >> k;
    vi v(n); 
    cia(v);
    int total = 0;
    // Take first k elements as initial sum
    for (int i = 0; i < k; i++) {
        total += v[i];
    }
    int max_sum = total;
    // Slide the window: take i cards from the end and (k - i) from the start
    for (int i = 1; i <= k; i++) {
        total = total - v[k - i] + v[n - i];
        max_sum = max(max_sum, total);
    }
    cout << max_sum;
}
*/
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