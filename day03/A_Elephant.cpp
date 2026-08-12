/*
 * Problem: A. Elephant
 * URL: https://codeforces.com/problemset/problem/617/A
 * Date: 2026-08-12
 * Time: 17:45:11
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int x, step = 0, temp;
  cin >> x;

  step += x / 5;
  temp = x % 5;
  step += temp / 4;
  temp = temp % 4;
  step += temp / 3;
  temp = temp % 3;
  step += temp / 2;
  temp = temp % 2;
  step += temp;

  cout << step;
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