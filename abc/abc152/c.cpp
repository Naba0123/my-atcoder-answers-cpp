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

  int ans = 0;
  int _min = 999999;
  int _max = 0;
  rep(i, n) {
    int p;
    cin >> p;
    if (_min >= p) {
      ans++;
    }
    _min = min(_min, p);
  }

  cout << ans << endl;
}
