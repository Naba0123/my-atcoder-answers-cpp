#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n, s;
  cin >> n >> s;
  vi a(n), p(n);
  rep(i, n) {
    cin >> a.at(i);
  }
  rep(i, n) {
    cin >> p.at(i);
  }

  int ans = 0;
  rep(i, n) {
    rep(j, n) {
      if (a[i] + p[j] == s) {
        ans++;
      }
    }
  }

  cout << ans << endl;
}
