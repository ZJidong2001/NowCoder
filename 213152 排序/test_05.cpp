/*
冒泡排序
*/

class Solution
{
public:
	vector<int> MySort(vector<int>& arr)
	{
		for (int i = 0; i < arr.size() - 1; ++i)
		{
			bool swap_flag = false;
			for (int j = 0; j < arr.size() - 1 - i; ++j)
			{
				if (arr[j] > arr[j + 1])
				{
					swap(arr[j], arr[j + 1]);
					swap_flag = true;
				}
			}
			if (swap_flag == false)
				break;
		}
		return arr;
	}
};