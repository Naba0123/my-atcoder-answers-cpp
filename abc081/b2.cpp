#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    int A, res = 100000;
    rep(i, N)
    {
        cin >> A;
        int _res = 0;
        while (A > 0)
        {
            if (A % 2 == 0)
            {
                A = A / 2;
                _res++;
            }
            else
            {
                break;
            }
        }
        res = min(res, _res);
    }

    cout << res << endl;
}
