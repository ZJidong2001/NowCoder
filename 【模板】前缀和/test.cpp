#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    vector<long long> dp(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int x = 0;
        cin >> x;
        dp[i] = dp[i - 1] + x;
    }

    while (m--)
    {
        int l = 0, r = 0;
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << endl;
    }

    return 0;
}