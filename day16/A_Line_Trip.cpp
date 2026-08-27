/*
 * Problem: A. Line Trip
 * URL: https://codeforces.com/problemset/problem/1901/A
 * Date: 2026-08-27
 * Time: 13:09:55
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x;
  cin >> n >> x;
  vi v(n);
  for (int i = 0; i < n; i++)
    cin >> v[i];
  sort(v.begin(), v.end());
  int maxDist = v[0];
  for (int i = 1; i < n; i++) {
    maxDist = max(maxDist, v[i] - v[i - 1]);
  }
  maxDist = max(maxDist, 2 * (x - v.back()));
  cout << maxDist << endl;
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