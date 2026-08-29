/*
 * Problem: A. Die Roll
 * URL: https://codeforces.com/problemset/problem/9/A
 * Date: 2026-08-29
 * Time: 11:58:41
 */

#pragma GCC optimize("O3")
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back

void solve() {
  int y, w;
  cin >> y >> w;
  int a = 6 - max(y, w) + 1;
  if (a == 6) cout << "1/1";
  else if (a % 2 == 0) cout << a / 2 << "/" << 3;
  else if (a % 3 == 0) cout << a / 3 << "/" << 2;
  else cout << a << "/" << 6;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}