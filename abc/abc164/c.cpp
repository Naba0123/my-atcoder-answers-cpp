#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) { cin >> S.at(i); }
  sort(S.begin(), S.end());
  S.erase(unique(S.begin(), S.end()), S.end());
  cout << S.size() << endl;
}
