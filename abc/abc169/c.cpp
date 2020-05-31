#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  ll a;
  double b;
  cin >> a >> b;
  string b_str = to_string(b);

  int _b = 0;
  _b += 100 * (int)(b_str[0] - '0');
  _b += 10 * (int)(b_str[2] - '0');
  _b += (int)(b_str[3] - '0');

  ll ans = a * _b;

  ans /= 100;

  cout << ans << endl;
}
