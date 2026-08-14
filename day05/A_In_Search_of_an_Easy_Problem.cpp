/*
 * Problem: A. In Search of an Easy Problem
 * URL: https://codeforces.com/problemset/problem/1030/A
 * Date: 2026-08-14
 * Time: 19:59:38
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, temp;
  cin >> n;
  bool easy = true;
  while (n--) {
    cin >> temp;
    if (temp)
      easy = false;
  }
  cout << (easy ? "EASY" : "HARD");
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