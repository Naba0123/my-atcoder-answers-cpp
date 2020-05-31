#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  int n;
  cin >> n;

  ll ans = 1;
  ll koeru = 1000000000000000000;
  rep(i, n) {
    ll a;
    cin >> a;
    if (a == 0) {
      ans = 0;
      break;
    }
    if (ans < 0) {
      continue;
    }
    if (a > koeru) {
      ans = -1;
      continue;
    }
    ans *= a;
    koeru = 1000000000000000000 / ans;
  }

  cout << ans << endl;
}
