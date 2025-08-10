#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    string str1, str2;
    cin >> str1 >> str2;

    string str;
    int prev1 = -1, prev2 = -1, ret = 0x3f3f3f3f;
    for (int i = 0; i < n; ++i)
    {
        cin >> str;
        if (str == str1)
        {
            if (prev2 != -1) ret = min(ret, i - prev2);
            prev1 = i;
        }
        else if (str == str2)
        {
            if (prev1 != -1) ret = min(ret, i - prev1);
            prev2 = i;
        }
    }

    cout << (ret == 0x3f3f3f3f ? -1 : ret) << endl;

    return 0;
}