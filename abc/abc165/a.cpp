#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)
using ll = long long;

int main() {
  int K, A, B;
  cin >> K;
  cin >> A >> B;

  if (A % K == 0) {
    cout << "OK" << endl;
    return 0;
  }
  int next = K * (A / K) + K;
  if (next <= B) {
    cout << "OK" << endl;
    return 0;
  }

  cout << "NG" << endl;
  
}
