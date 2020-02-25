#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    string S;
    cin >> S;

    int countPlus = 0, countMinus = 0;
    rep(i, S.size())
    {
        if (S.at(i) == '+')
        {
            countPlus++;
        }
        else if (S.at(i) == '-')
        {
            countMinus++;
        }
    }

    cout << (1 + countPlus - countMinus) << endl;
}
