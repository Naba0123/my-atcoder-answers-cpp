#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  int ma = max(max(A, B), C);
  int mi = min(min(A, B), C);

  cout << ma - mi << endl;
}
