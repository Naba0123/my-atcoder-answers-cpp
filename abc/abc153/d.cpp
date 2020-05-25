#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

ll get_attack_count(ll hp) {

  if (hp == 1) {
    return 1;
  }

  return get_attack_count(hp / 2) * 2 + 1;
}

int main() {
  ll h;
  cin >> h;

  ll ans = get_attack_count(h);

  cout << ans << endl;
}
