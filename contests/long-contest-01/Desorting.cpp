/*
 * Problem: Desorting
 * URL: https://vjudge.net/contest/841160#problem/P
 * Date: 2026-08-24
 * Time: 02:19:51
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, minGap = INT32_MAX, prev, x;
  cin >> n;
  cin >> prev;
  while (--n) {
    cin >> x;
    if (x < prev)
      minGap = -1;
    minGap = min(minGap, abs(prev - x));
    prev = x;
  }
  if (minGap == -1)
    cout << 0 << endl;
  else
    cout << (minGap / 2) + 1 << endl;
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