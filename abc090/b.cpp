#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    int A, B;
    cin >> A >> B;

    int res = 0;
    rep_s(i, A, B + 1)
    {
        int _i = i;
        int after = 0;

        int keta = 10000;
        while (_i > 0)
        {
            after += (_i % 10) * keta;
            _i /= 10;
            keta /= 10;
        }

        if (i == after)
        {
            res++;
        }
    }

    cout << res << endl;
}
