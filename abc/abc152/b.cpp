#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  int a, b;
  cin >> a >> b;

  rep(i, max(a, b)) {
    cout << min(a, b);
  }
  cout << endl;
}
