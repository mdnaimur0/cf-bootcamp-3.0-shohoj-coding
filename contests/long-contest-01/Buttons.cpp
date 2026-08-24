/*
 * Problem: Buttons
 * URL: https://vjudge.net/contest/841160#problem/N
 * Date: 2026-08-24
 * Time: 01:38:09
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  ll a, b, c;
  cin >> a >> b >> c;
  a += (c / 2 + c % 2);
  b += c / 2;
  cout << (a > b ? "First" : "Second") << endl;
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