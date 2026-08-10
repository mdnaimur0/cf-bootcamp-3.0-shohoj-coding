/*
 * Problem: A. Next Round
 * URL: https://codeforces.com/problemset/problem/158/A
 * Date: 2026-08-10
 * Time: 12:55:56
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k;
  cin >> n >> k;
  int scores[n];
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> scores[i];
  }
  for (int i = 0; i < n; i++) {
    if (scores[i] > 0 && scores[i] >= scores[k - 1])
      count++;
    else
      break;
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