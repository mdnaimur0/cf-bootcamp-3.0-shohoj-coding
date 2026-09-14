/*
 * Problem: A. Odd Divisor
 * URL: https://codeforces.com/problemset/problem/1475/A
 * Date: 2026-09-15
 * Time: 01:31:06
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
  ll n;
  cin >> n;
  cout << (n & n - 1 ? "YES\n" : "NO\n");
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}