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
// TLE 
//     int numberOfSubstrings(string s) {
//       int cnt = 0;
//       for(int i = 0;i<s.size();i++){
//           vector<int>h(3,0);
//           for(int j = i;j<s.size();j++){
//             h[s[j]-'a'] = 1;
//             if(h[0]+h[1]+h[2]==3)cnt++;
//           }
//       }
//       return cnt;
//     }
// correct approach
    int numberOfSubstrings(string s) {
        int n = s.size();
        vector<int>res = {-1,-1,-1};
        int t = 0;
        for(int i =0;i<n;i++){
            res[s[i]-'a']=i;
            t +=1+ min({res[0],res[1],res[2]});
        }
        return t;
    }

void solve() {
   string s; cin>>s;
  cout<< numberOfSubstrings(s);
}

int main() {
    int t = 1;
    while (t--) {
        solve();
        cout << endl;
    }
    return 0;
}