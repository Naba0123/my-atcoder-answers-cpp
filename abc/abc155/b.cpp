#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
  int n;
  cin >> n;

  string ans = "APPROVED";
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      if (a % 3 != 0 && a % 5 != 0) {
        ans = "DENIED";
      }
    }
  }

  cout << ans << endl;
}
