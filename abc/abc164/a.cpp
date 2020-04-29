#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int S, W;
  cin >> S >> W;
  if (S <= W) {
    cout << "unsafe" << endl;
  } else {
    cout << "safe" << endl;
  }
}
