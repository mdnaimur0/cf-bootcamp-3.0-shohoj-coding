/*
 * Problem: A. Candies and Two Sisters
 * URL: https://codeforces.com/problemset/problem/1335/A
 * Date: 2026-08-20
 * Time: 13:37:46
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll n;
  cin >> n;
  if (n < 3)
    cout << 0;
  else if (n % 2)
    cout << n / 2;
  else
    cout << (n - 1) / 2;
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}