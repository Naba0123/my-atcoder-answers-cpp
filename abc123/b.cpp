#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t[5];
    cin >> t[0];
    cin >> t[1];
    cin >> t[2];
    cin >> t[3];
    cin >> t[4];

    // 一番小さいやつ
    int min_i = 0;
    for (int i = 1; i < 5; i++) {
        if (t[min_i] % 10 == 0 || (t[i] % 10 != 0 && t[min_i] % 10 > t[i] % 10)) {
            min_i = i;
        }
    }

    int res = 0;
    for (int i = 0; i < 5; i++) {
        if (i == min_i) {
            continue;
        }
        float _t = (float)t[i] / 10;
        res += ceil(_t) * 10;
    }
    res += t[min_i];

    printf("%d", res);

}
