#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int N;
  cin >> N;

  while (N > 0) {
    if (N % 10 == 7) {
      cout << "Yes" << endl;
      return 0;
    }
    N = N / 10;
  }

  cout << "No" << endl;
}
