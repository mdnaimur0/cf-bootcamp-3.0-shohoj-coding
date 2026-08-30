/*
 * Problem: A. Panoramix's Prediction
 * URL: https://codeforces.com/problemset/problem/80/A
 * Date: 2026-08-31
 * Time: 02:16:38
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

const vi nums = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

void solve() {
  int n, m;
  cin >> n >> m;
  for (int i = 0; i < nums.size() - 1; i++) {
    if (nums[i] == n) {
      cout << (m == nums[i + 1] ? "YES" : "NO");
      return;
    }
  }
  cout << "NO";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t = 1;
  // cin >> t;
  while (t--) solve();

  return 0;
}