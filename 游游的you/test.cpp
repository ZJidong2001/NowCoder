#include <iostream>
using namespace std;

int main()
{
    int q = 0, a = 0, b = 0, c = 0;
    cin >> q;

    while (q--)
    {
        cin >> a >> b >> c;
        int common = min(a, min(b, c));
        cout << common * 2 + max(0, b - common - 1) << endl;
    }

    return 0;
}