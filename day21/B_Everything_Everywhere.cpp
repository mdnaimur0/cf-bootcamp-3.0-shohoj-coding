/*
 * Problem: B. Everything Everywhere
 * URL: https://codeforces.com/problemset/problem/2226/B
 * Date: 2026-09-06
 * Time: 23:53:49
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
  int n;
  cin >> n;

  vi p(n);
  for (int& x : p) cin >> x;

  int ans = 0, g, mx, mn;
  for (int j = 0; j < n - 1; j++) {
    g = gcd(p[j], p[j + 1]);
    mx = max(p[j], p[j + 1]);
    mn = min(p[j], p[j + 1]);
    ans += (mx - mn == g);
  }
  cout << ans << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}