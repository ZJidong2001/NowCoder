#include <iostream>
using namespace std;

int dp[31][31];

int main()
{
    int n = 0;
    cin >> n;

    dp[1][1] = 1;
    for (int i = 2; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            printf("%5d", dp[i][j]);
        printf("\n");
    }

    return 0;
}