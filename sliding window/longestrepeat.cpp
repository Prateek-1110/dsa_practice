// https://leetcode.com/problems/longest-repeating-character-replacement/description/
#include <bits/stdc++.h>
#define cia(x) for(int i = 0; i < x.size(); i++) cin >> x[i];
#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define srt(x) sort(x.begin(), x.end())
#define rsrt(x) sort(x.rbegin(), x.rend())
#define pb push_back
using namespace std;
int f(string s, int k) {
    int maxfreq = 0, maxlen = 0;
    int l = 0;
    vi hash(26, 0);
    for (int r = 0; r < s.size(); r++) {
        hash[s[r] - 'A']++;
        maxfreq = max(maxfreq, hash[s[r] - 'A']); 
        if ((r - l + 1) - maxfreq > k) {
            hash[s[l] - 'A']--;
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
    }
    return maxlen;
}


void solve() {
    string s; cin>>s;
    int k ; cin>>k;
    cout<<f(s,k);
}

int main() {
    int t = 1;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}