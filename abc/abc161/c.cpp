#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  ll n, k;
  cin >> n >> k;

  ll div = n/k;
  n -= k * div;
  
  ll ans = min(n, abs(n - k));

  cout << ans << endl;

}
