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

  vi a(n);
  vi b(n);

  rep(i, n) {
    cin >> a[i] >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  int ans = 0;
  if (n % 2 == 0) {
    // 偶数
    int check_i_down = n/2 - 1;
    int check_i_up = n/2;
    int down_min_x = a[check_i_down];
    int down_max_x = b[check_i_down];
    int up_min_x = a[check_i_up];
    int up_max_x = b[check_i_up];
    ans = (down_max_x + up_max_x) - (down_min_x + up_min_x) + 1;
  } else {
    // 奇数
    int check_i = (n + 1) / 2 - 1;
    int min_x = a[check_i];
    int max_x = b[check_i];
    ans = max_x - min_x + 1;
  }

  cout << ans << endl;
}
