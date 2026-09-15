/*
 * Problem: B. Sale
 * URL: https://codeforces.com/problemset/problem/34/B
 * Date: 2026-09-15
 * Time: 12:33:42
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
  int n, m;
  cin >> n >> m;
  vi v(n);
  for (int& x : v) cin >> x;
  sort(all(v));
  int sum = 0;
  for (int i = 0; i < m; i++) {
    sum += min(0, v[i]);
  }
  cout << abs(sum);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}