/*
 * Problem: A. Division?
 * URL: https://codeforces.com/problemset/problem/1669/A
 * Date: 2026-08-22
 * Time: 20:24:48
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int r;
  cin >> r;
  int div = 4;
  if (r >= 1900)
    div = 1;
  else if (r >= 1600)
    div = 2;
  else if (r >= 1400)
    div = 3;
  cout << "Division " << div << endl;
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