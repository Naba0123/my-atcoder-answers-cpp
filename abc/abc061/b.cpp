#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> num(N);

  rep(i, M) {
    int a, b;
    cin >> a >> b;
    num.at(a - 1)++;
    num.at(b - 1)++;
  }

  rep(i, N) { cout << num.at(i) << endl; }
}
