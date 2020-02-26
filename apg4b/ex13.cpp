#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);

  rep(i, N) { cin >> A.at(i); }

  // 平均
  int ave = accumulate(A.begin(), A.end(), 0) / N;

  rep(i, N) { cout << abs(ave - A.at(i)) << endl; }
}
