/*
 * Problem: A. Sum
 * URL: https://codeforces.com/problemset/problem/1742/A
 * Date: 2026-08-20
 * Time: 15:12:58
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b, c;
  cin >> a >> b >> c;
  if (a == b + c || b == a + c || c == a + b)
    cout << "YES\n";
  else
    cout << "NO\n";
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