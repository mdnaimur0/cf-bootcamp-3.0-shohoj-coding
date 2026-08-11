/*
 * Problem: A. Boy or Girl
 * URL: https://codeforces.com/problemset/problem/236/A
 * Date: 2026-08-11
 * Time: 13:36:22
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  string n;
  vi v(26, 0);
  cin >> n;

  for (int i = 0; i < n.length(); i++) {
    v[n[i] - 97]++;
  }

  int c;
  for (int i = 0; i < 26; i++) {
    if (v[i] > 0)
      c++;
  }

  if (c % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
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