#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    int N;
    cin >> N;

    int A[N];
    rep(i, N)
    {
        cin >> A[i];
    }

    int res = 0;
    while (true)
    {
        bool is_all_even = true;
        rep(i, N)
        {
            if (A[i] % 2 == 1)
            {
                is_all_even = false;
                break;
            }
            A[i] = A[i] / 2;
        }
        if (is_all_even)
        {
            res++;
        }
        else
        {
            break;
        }
    }

    cout << res << endl;
}
