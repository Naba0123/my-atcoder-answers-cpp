#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<int> AA(N);
  rep(i, N) { AA.at(i) = 0; }
  rep_s(i, 1, N) {
    int A;
    cin >> A;
    AA.at(A - 1) = AA.at(A - 1) + 1;
  }
  rep(i, N) { cout << AA.at(i) << endl; }
}
