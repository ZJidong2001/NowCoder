#include <iostream>
using namespace std;

int main()
{
    int L = 0, R = 0;
    cin >> L >> R;

    int ret = 0;
    for (int i = L; i <= R; ++i)
    {
        int tmp = i;
        while (tmp)
        {
            if (tmp % 10 == 2) ret++;
            tmp /= 10;
        }
    }

    cout << ret << endl;

    return 0;
}