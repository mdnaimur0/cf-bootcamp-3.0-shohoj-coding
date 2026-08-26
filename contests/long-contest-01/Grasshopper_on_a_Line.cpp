/*
 * Problem: Grasshopper on a Line
 * URL: https://vjudge.net/contest/841160#problem/R
 * Date: 2026-08-25
 * Time: 12:20:53
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int x, k;
  cin >> x >> k;
  x = abs(x);
  int curr = x;
  vector<int> steps;
  while (x > 0) {
    curr = x;
    while (curr % k == 0)
      curr--;
    x -= curr;
    steps.push_back(curr);
  }
  cout << steps.size() << endl;
  for (int a : steps)
    cout << a << " ";
  cout << endl;
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