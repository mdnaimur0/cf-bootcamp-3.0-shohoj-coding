/*
 * Problem: A. Choosing Teams
 * URL: https://codeforces.com/problemset/problem/432/A
 * Date: 2026-08-31
 * Time: 01:48:29
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
  int n, k, x, ans = 0;
  cin >> n >> k;
  while (n--) {
    cin >> x;
    if (5 - x >= k) ans++;
  }
  cout << ans / 3;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}