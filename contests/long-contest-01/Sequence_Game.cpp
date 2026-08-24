/*
 * Problem: Sequence Game
 * URL: https://vjudge.net/contest/841160#problem/L
 * Date: 2026-08-24
 * Time: 00:51:47
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vector<int> a;
  for (int i = 0; i < n; ++i) {
    int x;
    cin >> x;
    if (i && a.back() > x) {
      a.push_back(1);
    }
    a.push_back(x);
  }
  cout << a.size() << "\n";
  for (int el : a)
    cout << el << " ";

  cout << "\n";
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