#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) { cin >> a.at(i); }
  sort(a.begin(), a.end(), greater<int>());

  int alice = 0, bob = 0;
  rep(i, N) {
    if (i % 2 == 0) {
      alice += a.at(i);
    } else {
      bob += a.at(i);
    }
  }

  cout << alice - bob << endl;
}
