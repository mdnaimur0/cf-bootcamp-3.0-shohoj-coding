/*
 * Problem: A. Even Odds
 * URL: https://codeforces.com/problemset/problem/318/A
 * Date: 2026-09-07
 * Time: 18:44:15
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
  ll n, k;
  cin >> n >> k;
  if (k <= (n + 1) / 2) cout << 2 * k - 1;
  else cout << 2 * (k - (n + 1) / 2);
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}