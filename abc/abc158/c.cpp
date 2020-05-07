#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = -1;
  rep_s(i, 1, 1010) {
    if (i * 8 / 100 == A && i / 10 == B) {
      ans = i;
      break;
    }
  }

  cout << ans << endl;


}
