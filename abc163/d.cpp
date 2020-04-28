#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

ll sum(ll l, ll r) { return (l + r) * (r - l + 1) / 2; }

int main() {
  int N, K;
  cin >> N >> K;
  ll ans = 0;
  for (int i = K; i <= N + 1; i++) {
    ll l = sum(0, i - 1), r = sum(N - i + 1, N);
    ans += r - l + 1;
    ans = ans % 1000000007;
  }
  cout << ans << endl;
  return 0;
}
