#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  int n, k;
  cin >> n >> k;

  if (k >= n) {
    cout << 0 << endl;
    return 0;
  }

  vi h(n);
  rep(i, n) {
    cin >> h[i];
  }

  sort(h.begin(), h.end(), greater<int>());

  ll remain_h = 0;
  rep_s(i, k, n) {
    remain_h += h[i];
  }

  cout << remain_h << endl;
}
