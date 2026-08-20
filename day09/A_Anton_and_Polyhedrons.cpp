/*
 * Problem: A. Anton and Polyhedrons
 * URL: https://codeforces.com/problemset/problem/785/A
 * Date: 2026-08-19
 * Time: 00:52:59
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n, ans = 0;
  cin >> n;
  string temp;
  while (n--) {
    cin >> temp;
    if (temp.compare("Tetrahedron") == 0)
      ans += 4;
    else if (temp.compare("Cube") == 0)
      ans += 6;
    else if (temp.compare("Octahedron") == 0)
      ans += 8;
    else if (temp.compare("Dodecahedron") == 0)
      ans += 12;
    else if (temp.compare("Icosahedron") == 0)
      ans += 20;
  }
  cout << ans;
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