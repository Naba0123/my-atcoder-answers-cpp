#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main()
{
    int N, K;
    cin >> N >> K;

    int res = 0;
    rep(i, N)
    {
        int x;
        cin >> x;
        if (x < abs(K - x))
        {
            res += x * 2;
        }
        else
        {
            res += abs(K - x) * 2;
        }
    }

    cout << res << endl;
}
