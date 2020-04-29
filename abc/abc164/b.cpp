#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main() {
  int a_hp, a_attack, b_hp, b_attack;
  cin >> a_hp >> a_attack >> b_hp >> b_attack;
  while (true) {
    // 高橋くんの攻撃
    b_hp -= a_attack;
    if (b_hp <= 0) {
      cout << "Yes" << endl;
      return 0;
    }
    a_hp -= b_attack;
    if (a_hp <= 0) {
      cout << "No" << endl;
      return 0;
    }
  }
}
