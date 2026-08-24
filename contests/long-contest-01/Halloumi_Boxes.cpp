/*
 * Problem: Halloumi Boxes
 * URL: https://vjudge.net/contest/841160#problem/A
 * Date: 2026-08-13
 * Time: 18:41:52
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k;
  cin >> n >> k;
  vi v(n);
  // int curr, maxRec;
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