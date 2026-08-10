/*
 * Problem: A. Team
 * URL: https://codeforces.com/problemset/problem/231/A
 * Date: 2026-08-10
 * Time: 12:46:04
 */

#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  int count = 0;
  int a, b, c;
  while (n--) {
    cin >> a >> b >> c;
    if ((a + b + c) >= 2)
      count++;
  }
  cout << count;

  return 0;
}