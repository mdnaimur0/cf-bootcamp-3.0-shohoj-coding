/*
 * Problem: D. Balanced Round
 * URL: https://codeforces.com/problemset/problem/1850/D
 * Date: 2026-09-16
 * Time: 00:46:30
 */

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
  int n, k;
  cin >> n >> k;
  vi v(n);
  for (int& x : v) cin >> x;
  sort(all(v));
  int ans = 0, curr = 1;
  for (int i = 1; i < n; i++) {
    if (abs(v[i] - v[i - 1]) > k) {
      ans = max(ans, curr);
      curr = 1;
    } else curr++;
  }
  ans = max(ans, curr);
  cout << n - ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}