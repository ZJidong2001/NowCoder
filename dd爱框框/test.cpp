#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0, x = 0;
    cin >> n >> x;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int l = 0, r = 0, sum = 0;
    int retl = -1, retr = -1, retlen = 0x3f3f3f3f;
    while (r < n)
    {
        sum += a[r];
        while (sum >= x)
        {
            if (r - l + 1 < retlen)
            {
                retl = l + 1;
                retr = r + 1;
                retlen = retr - retl + 1;
            }
            sum -= a[l];
            ++l;
        }
        ++r;
    }

    cout << retl << " " << retr << endl;

    return 0;
}