#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int a, b;
  string s, t, u;
  cin >> s >> t >> a >> b >> u;
  a -= (s == u ? 1 : 0);
  b -= (t == u ? 1 : 0);

  cout << a << " " << b << endl;
}
