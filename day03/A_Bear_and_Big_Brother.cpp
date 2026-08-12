/*
 * Problem: A. Bear and Big Brother
 * URL: https://codeforces.com/problemset/problem/791/A
 * Date: 2026-08-12
 * Time: 16:05:50
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int a, b, count = 0;
  cin >> a >> b;
  while (a <= b) {
    count++;
    a *= 3;
    b *= 2;
  }
  cout << count;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}