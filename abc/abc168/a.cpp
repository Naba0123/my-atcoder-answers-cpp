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

  n = n % 10;
  string ans;
  if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9) {
    ans = "hon";
  } else if (n == 0 || n == 1 || n == 6 || n == 8) {
    ans = "pon";
  } else {
    ans = "bon";
  }

  cout << ans << endl;
}
