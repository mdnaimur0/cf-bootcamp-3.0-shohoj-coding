/*
 * Problem: A. Tram
 * URL: https://codeforces.com/problemset/problem/116/A
 * Date: 2026-08-14
 * Time: 19:50:00
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, cap = 0, curr = 0, temp;
  cin >> n;
  while (n--) {
    cin >> temp;
    curr -= temp;
    cin >> temp;
    curr += temp;
    if (curr > cap)
      cap = curr;
  }
  cout << cap;
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