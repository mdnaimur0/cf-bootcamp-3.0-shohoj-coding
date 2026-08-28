/*
 * Problem: A. Creating Words
 * URL: https://codeforces.com/problemset/problem/1985/A
 * Date: 2026-08-28
 * Time: 14:09:49
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string a, b;
  cin >> a >> b;
  swap(a[0], b[0]);
  cout << a << " " << b << endl;
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