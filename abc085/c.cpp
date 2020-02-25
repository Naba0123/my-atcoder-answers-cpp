#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N, Y;
  cin >> N >> Y;

  rep(i1, N + 1) {
    rep(i5, N - i1 + 1) {
      int i10 = N - i1 - i5;
      if (i1 * 1000 + i5 * 5000 + i10 * 10000 == Y) {
        cout << i10 << " " << i5 << " " << i1 << endl;
        return 0;
      }
    }
  }
  cout << "-1 -1 -1" << endl;
}
