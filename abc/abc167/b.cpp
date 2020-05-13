#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int a, b, c, k;
  cin >> a >> b >> c >> k;

  int ans = 0;

  ans += 1 * min(a, k);
  k -= a;
  if (k > 0) {
    k -= b;
    if (k > 0) {
      ans += -1 * min(c, k);
    }
  }

  cout << ans << endl;
}
