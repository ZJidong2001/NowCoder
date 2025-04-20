/*
选择排序
*/

class Solution
{
public:
	vector<int> MySort(vector<int>& arr)
	{
		int begin = 0, end = arr.size() - 1;
		while (begin < end)
		{
			int min_index = begin, max_index = begin;
			for (int i = begin; i <= end; ++i)
			{
				if (arr[i] < arr[min_index])
					min_index = i;
				if (arr[i] > arr[max_index])
					max_index = i;
			}
			swap(arr[begin], arr[min_index]);
			if (max_index == begin)
				max_index = min_index;
			swap(arr[end], arr[max_index]);
			++begin;
			--end;
		}
		return arr;
	}
};