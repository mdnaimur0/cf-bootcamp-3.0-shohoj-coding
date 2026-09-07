/*
 * Problem: A. HQ9+
 * URL: https://codeforces.com/problemset/problem/133/A
 * Date: 2026-09-07
 * Time: 19:30:38
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
  string p;
  cin >> p;
  cout << (p.contains('H') || p.contains('Q') || p.contains('9') ? "YES" : "NO");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}