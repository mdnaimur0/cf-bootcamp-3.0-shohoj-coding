/*
 * Problem: Line Trip
 * URL: https://vjudge.net/contest/841160#problem/B
 * Date: 2026-08-22
 * Time: 22:18:49
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