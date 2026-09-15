/*
 * Problem: B. Multiply by 2, divide by 6
 * URL: https://codeforces.com/problemset/problem/1374/B
 * Date: 2026-09-15
 * Time: 12:28:06
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
  int steps = 0;
  while (n > 1) {
    if (n % 6 == 0) n /= 6;
    else n *= 2;
    steps++;
  }
  cout << (n == 1 ? steps : -1) << endl;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  cin >> t;
  while (t--) solve();

  return 0;
}