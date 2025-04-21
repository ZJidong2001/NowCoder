/*
首先对数组进行预处理，得到对应的前缀和数组
利用前缀和数组r下标对应的值减去l-1下标对应的值，即可得到下标在l、r之间的所有元素的累加和
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n, q;
	cin >> n >> q;
	
	vector<long long> arr(n + 1);
	vector<long long> sum(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> arr[i];
		sum[i] = sum[i - 1] + arr[i];
	}
	
	while (q--)
	{
		int l, r;
		cin >> l >> r;
		cout << sum[r] - sum[l - 1] << endl;
	}
	
	return 0;
}