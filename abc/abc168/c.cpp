#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

#define MOD 1000000007

int main() {
  double a, b, h, m;
  cin >> a >> b >> h >> m;

  double do_h = h * 30 + m / 2;
  double do_m = m * 6;
  double rad = abs(do_h - do_m) * M_PI / 180;

  double ans = sqrt(a*a + b*b - 2 * a * b * cos(rad));

  printf("%.20f\n", ans);
}
