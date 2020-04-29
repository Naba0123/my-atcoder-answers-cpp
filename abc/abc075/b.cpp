#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    int H, W;
    cin >> H >> W;

    int M[H][W];
    rep(i, H)
    {
        rep(j, W)
        {
            M[i][j] = 0;
        }
    }
    char S[H][W];

    rep(i, H)
    {
        rep(j, W)
        {
            cin >> S[i][j];
            if (S[i][j] == '#')
            {
                rep_s(_i, i - 1, i + 2)
                {
                    rep_s(_j, j - 1, j + 2)
                    {
                        if ((_i >= 0 && _j >= 0) && (_i < H && _j < W))
                        {
                            M[_i][_j]++;
                        }
                    }
                }
            }
        }
    }

    rep(i, H)
    {
        rep(j, W)
        {
            if (S[i][j] == '#')
            {
                cout << '#';
            }
            else
            {
                cout << M[i][j];
            }
        }

        cout << endl;
    }
}
