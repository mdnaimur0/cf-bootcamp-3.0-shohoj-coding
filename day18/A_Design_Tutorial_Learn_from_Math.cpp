/*
 * Problem: A. Design Tutorial: Learn from Math
 * URL: https://codeforces.com/problemset/problem/472/A
 * Date: 2026-08-29
 * Time: 10:13:56
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

bool isComposite(int n) {
  if (n <= 3) return false;
  if (n % 2 == 0 || n % 3 == 0) return true;
  for (int i = 5; i * i <= n; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) return true;
  }
  return false;
}

void solve() {
  int n, x = 4;
  cin >> n;
  while (!isComposite(x) || !isComposite(n - x)) {
    x++;
  }
  cout << x << " " << n - x;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}