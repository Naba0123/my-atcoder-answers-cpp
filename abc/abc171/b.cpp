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

  vi p(n);
  
  rep(i, n) {
    cin >> p[i];
  }

  sort(p.begin(), p.end());

  int ans = 0;
  rep(i, k) {
    ans += p[i];
  } 

  cout << ans << endl;
}
