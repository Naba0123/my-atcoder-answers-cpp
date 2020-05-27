#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  int n, k, m;
  cin >> n >> k >> m;

  double _sum = 0;
  rep(i, n - 1) {
    int a;
    cin >> a;
    _sum += a;
  }

  int ans = 0;

  if (n * m - _sum > 0) {
    ans = ceil(n * m - _sum);
    if (ans > k) {
      ans = -1;
    }
  }


  cout << ans << endl;
}
