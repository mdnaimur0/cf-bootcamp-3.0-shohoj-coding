/*
 * Problem: A. Codeforces Checking
 * URL: https://codeforces.com/problemset/problem/1791/A
 * Date: 2026-08-24
 * Time: 15:46:56
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  char c;
  cin >> c;
  cout << (string("codeforces").find(c) != string::npos ? "YES" : "NO") << endl;
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