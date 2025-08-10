#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;

    vector<int> cost(n);
    for (auto& e : cost) cin >> e;

    if (n == 1)
    {
        cout << cost[0] << endl;
        return 0;
    }

    vector<int> dp(n + 1);
    for (int i = 2; i <= n; ++i)
        dp[i] = min(dp[i - 2] + cost[i - 2], dp[i - 1] + cost[i - 1]);

    cout << dp[n] << endl;

    return 0;
}