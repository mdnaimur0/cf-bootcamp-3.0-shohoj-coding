/*
 * Problem: Doremy's Paint 3
 * URL: https://vjudge.net/contest/841160#problem/F
 * Date: 2026-08-23
 * Time: 17:14:13
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

void solve() {
  int n;
  cin >> n;
  map<ll, ll> m;
  ll x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    m[x]++;
  }
  if (n < 3 || (n == 3 && m.size() == 2)) {
    cout << "Yes" << endl;
    return;
  }

  vector<ll> vals;
  for (const auto &pair : m)
    vals.push_back(pair.second);

  ll mn = *min_element(vals.begin(), vals.end());
  if (mn < 2)
    cout << "No" << endl;
  else
    cout << "Yes" << endl;
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