#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int gcd(int a, int b) {
  if (a < b) {
    int tmp = a;
    a = b;
    b = tmp;
  }
  if (a % b == 0) {
    return b;
  }
  return gcd(b, a % b);
}

int my_gcd(int a, int b, int c) { return gcd(gcd(a, b), c); }

int main() {
  int K;
  cin >> K;

  ll ans = 0;

  rep_s(i, 1, K + 1) {
    rep_s(j, 1, K + 1) {
      rep_s(l, 1, K + 1) { ans += my_gcd(i, j, l); }
    }
  }

  cout << ans << endl;
}
