/*
 * Problem: A. Halloumi Boxes
 * URL: https://codeforces.com/problemset/problem/1903/A
 * Date: 2026-08-24
 * Time: 16:18:15
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k;
  cin >> n >> k;
  vi v(n);
  bool sorted = true;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i > 0 && v[i] < v[i - 1])
      sorted = false;
  }

  if (sorted || k >= 2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
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