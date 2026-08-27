/*
 * Problem: A. To My Critics
 * URL: https://codeforces.com/problemset/problem/1850/A
 * Date: 2026-08-27
 * Time: 13:26:41
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int v[3];
  cin >> v[0] >> v[1] >> v[2];
  sort(v, v + 3);
  cout << ((v[1] + v[2]) >= 10 ? "YES" : "NO") << endl;
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