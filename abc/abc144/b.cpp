#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  for (int i = 9; i > 0; i--) {
    for (int j = 9; j > 0; j--) {
      if (i * j == N) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
}
