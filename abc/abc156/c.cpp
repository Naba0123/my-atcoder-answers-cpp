#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n;
  cin >> n;

  vi x(n);
  int max_num = 0;
  rep(i, n) {
    cin >> x[i];
    max_num = max(max_num, x[i]);
  }

  int ans = -1;

  rep_s(i, 1, max_num + 1) {
    int _ans = 0;
    rep(j, n) {
      _ans += (x[j] - i) * (x[j] - i);
    }
    if (ans == -1) {
      ans = _ans;
    } else {
      ans = min(ans, _ans);
    }
  }

  cout << ans << endl;
}
