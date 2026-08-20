/*
 * Problem: A. Sum of Round Numbers
 * URL: https://codeforces.com/problemset/problem/1352/A
 * Date: 2026-08-20
 * Time: 14:15:39
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int pow10(int n) {
  static int pow10[10] = {1,      10,      100,      1000,      10000,
                          100000, 1000000, 10000000, 100000000, 1000000000};

  return pow10[n];
}

void solve() {
  int n;
  cin >> n;
  int ans = 0, l, temp;
  vi v;
  while (n > 0) {
    l = log10(n) + 1;
    temp = pow10(l - 1);
    ans++;
    v.push_back(n - (n % temp));
    n = n % temp;
  }
  cout << ans << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";
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