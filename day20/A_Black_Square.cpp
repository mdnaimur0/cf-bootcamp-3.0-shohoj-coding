/*
 * Problem: A. Black Square
 * URL: https://codeforces.com/problemset/problem/431/A
 * Date: 2026-08-31
 * Time: 15:39:49
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
  vi v(4);
  for (int& el : v) cin >> el;
  string s;
  cin >> s;
  int ans = 0;
  for (char c : s) ans += v[c - '1'];
  cout << ans;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}