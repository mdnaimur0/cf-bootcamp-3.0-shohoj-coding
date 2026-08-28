/*
 * Problem: A. Team Olympiad
 * URL: https://codeforces.com/problemset/problem/490/A
 * Date: 2026-08-28
 * Time: 14:20:13
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x;
  cin >> n;
  vi a, b, c;
  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x == 1)
      a.push_back(i + 1);
    else if (x == 2)
      b.push_back(i + 1);
    else
      c.push_back(i + 1);
  }
  x = min({a.size(), b.size(), c.size()});
  cout << x << endl;
  for (int i = 0; i < x; i++) {
    cout << a[i] << " " << b[i] << " " << c[i] << endl;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}