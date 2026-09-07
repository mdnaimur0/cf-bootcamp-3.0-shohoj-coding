/*
 * Problem: B. Different Distances
 * URL: https://codeforces.com/problemset/problem/2233/B
 * Date: 2026-09-04
 * Time: 00:00:00
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
  int n;
  cin >> n;
  if (n % 2 == 0) {
    for (int i = 2; i <= n; i += 2) {
      cout << i - 1 << " " << i << " " << i << " " << i - 1 << " " << i << " " << i - 1 << " " << i - 1 << " " << i << " ";
    }
  } else {
    cout << "1 1 2 1 2 3 1 3 2 2 3 3 ";
    if (n >= 5) {
      for (int i = 5; i <= n; i += 2) {
        cout << i - 1 << " " << i << " " << i << " " << i - 1 << " " << i << " " << i - 1 << " " << i - 1 << " " << i << " ";
      }
    }
  }
  cout << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}