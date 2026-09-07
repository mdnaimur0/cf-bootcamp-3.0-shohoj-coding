/*
 * Problem: A. Gravity Flip
 * URL: https://codeforces.com/problemset/problem/405/A
 * Date: 2026-09-07
 * Time: 19:02:36
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
  vi v(n);
  for (int& x : v) cin >> x;
  sort(all(v));
  for (int x : v) cout << x << " ";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}