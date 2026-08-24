/*
 * Problem: Forbidden Integer
 * URL: https://vjudge.net/contest/841160#problem/Q
 * Date: 2026-08-24
 * Time: 02:39:02
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, k, x, i;
  cin >> n >> k >> x;
  if (k <= 1 && x == 1)
    cout << "NO" << endl;
  else if (x != 1) {
    cout << "YES" << endl << n << endl;
    for (i = 0; i < n; i++)
      cout << 1 << " ";
    cout << endl;
  } else if (x != 2 && n % 2 == 0) {
    cout << "YES" << endl << n / 2 << endl;
    for (i = 0; i < n / 2; i++)
      cout << 2 << " ";
    cout << endl;
  } else if (n % 2 && n >= 3 && k >= 3) {
    cout << "YES" << endl << (n - 3) / 2 + 1 << endl;
    cout << 3 << " ";
    for (i = 0; i < (n - 3) / 2; i++)
      cout << 2 << " ";
    cout << endl;
  } else
    cout << "NO" << endl;
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