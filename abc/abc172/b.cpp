#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  string s, t;
  cin >> s >> t;

  int ans = 0;
  rep(i, s.size()) {
    if (s[i] != t[i]) {
      ans++;
    }
  }
  cout << ans << endl;
}
