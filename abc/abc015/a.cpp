#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep_s(i, s, n) for (int i = (int)(s); i < (int)(n); i++)

int main()
{
    string A, B;
    cin >> A >> B;

    cout << (A.size() < B.size() ? B : A) << endl;
}
