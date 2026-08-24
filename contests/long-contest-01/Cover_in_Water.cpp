/*
 * Problem: Cover in Water
 * URL: https://vjudge.net/contest/841160#problem/C
 * Date: 2026-08-22
 * Time: 22:37:32
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, ans = 0;
  cin >> n;
  string s;
  cin >> s;

  int streak = 0;
  for (char c : s) {
    if (c == '.')
      streak++;
    else {
      if (streak < 3)
        ans += streak;
      else
        break;
      streak = 0;
    }
  }
  if (streak < 3)
    ans += streak;
  else
    ans = 2;

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