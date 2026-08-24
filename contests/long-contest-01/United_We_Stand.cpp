/*
 * Problem: United We Stand
 * URL: https://vjudge.net/contest/841160#problem/M
 * Date: 2026-08-24
 * Time: 01:19:04
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  vector<ll> a(n), b, c;
  for (int i = 0; i < n; i++)
    cin >> a[i];
  sort(a.begin(), a.end());
  b.push_back(a.front());
  for (int i = 1; i < n; i++) {
    if (b.back() % a[i])
      c.push_back(a[i]);
    else
      b.push_back(a[i]);
  }
  if (b.size() == 0 || c.size() == 0) {
    cout << -1 << endl;
    return;
  }
  cout << b.size() << " " << c.size() << endl;
  for (int el : b)
    cout << el << " ";
  cout << endl;
  for (int el : c)
    cout << el << " ";
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