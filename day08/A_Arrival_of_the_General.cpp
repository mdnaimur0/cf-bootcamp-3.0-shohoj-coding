/*
 * Problem: A. Arrival of the General
 * URL: https://codeforces.com/problemset/problem/144/A
 * Date: 2026-08-19
 * Time: 00:08:11
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vi v(n);
  int max = 0, min = 0, ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (v[max] < v[i])
      max = i;
    if (v[min] >= v[i])
      min = i;
  }
  ans += max;
  ans += n - 1 - min;
  if (min < max)
    ans--;

  cout << ans;
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