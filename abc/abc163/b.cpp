#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;
  rep(i, M) {
    int A;
    cin >> A;
    N -= A;
    if (N < 0) {
      cout << "-1" << endl;
      return 0;
    }
  }
  cout << N << endl;
}
