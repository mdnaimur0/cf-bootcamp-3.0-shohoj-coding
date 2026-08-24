/*
 * Problem: Don't Try to Count
 * URL: https://vjudge.net/contest/841160#problem/G
 * Date: 2026-08-23
 * Time: 18:12:10
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, m;
  cin >> n >> m;
  string x, s;
  cin >> x >> s;
  int ans = 0;
  while (x.find(s) == string::npos) {
    if (ans > 0 && x.length() > (s.length() * s.length())) {
      cout << -1 << endl;
      return;
    }
    x += x;
    ans++;
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}