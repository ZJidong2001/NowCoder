#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n = 0, m = 0;
    cin >> n >> m;

    vector<int> arr(n + 1);
    for (int i = 1; i <= n; ++i) cin >> arr[i];

    vector<long long> dp(n + 1);
    for (int i = 1; i <= n; ++i) dp[i] = dp[i - 1] + arr[i];

    int l = 0, r = 0;
    while (m--)
    {
        cin >> l >> r;
        cout << dp[r] - dp[l - 1] << endl;
    }

    return 0;
}