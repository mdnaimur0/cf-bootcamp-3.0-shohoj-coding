/*
 * Problem: A. Puzzles
 * URL: https://codeforces.com/problemset/problem/337/A
 * Date: 2026-09-13
 * Time: 22:53:32
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
  vi v(m);
  for (int& x : v) cin >> x;
  sort(all(v));
  int gap = INT32_MAX;
  for (int i = 0; i < m - n + 1; i++) {
    gap = min(gap, v[i + n - 1] - v[i]);
  }
  cout << gap;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}