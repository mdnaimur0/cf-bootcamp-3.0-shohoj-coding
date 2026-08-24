/*
 * Problem: Blank Space
 * URL: https://vjudge.net/contest/841160#problem/U
 * Date: 2026-08-24
 * Time: 03:17:22
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, x;
  cin >> n;
  int streak = 0, mxStreak = 0;
  while (n--) {
    cin >> x;
    if (x == 0)
      streak++;
    else {
      mxStreak = max(mxStreak, streak);
      streak = 0;
    }
  }
  mxStreak = max(mxStreak, streak);
  cout << mxStreak << endl;
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