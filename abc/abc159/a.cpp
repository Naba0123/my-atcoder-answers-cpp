#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N, M;
  cin >> N >> M;

  int ans = 0;
  ans += N * (N - 1) / 2;
  ans += M * (M - 1) / 2;

  cout << ans << endl;
}
