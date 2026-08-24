/*
 * Problem: Target Practice
 * URL: https://vjudge.net/contest/841160#problem/J
 * Date: 2026-08-24
 * Time: 00:20:45
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string s;
  int ans = 0, i, j;
  for (i = 0; i < 10; i++) {
    cin >> s;
    for (j = 0; j < 10; j++) {
      if (s[j] == 'X') {
        ans += min(min(i, abs(i - 9)), min(j, abs(j - 9))) + 1;
      }
    }
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