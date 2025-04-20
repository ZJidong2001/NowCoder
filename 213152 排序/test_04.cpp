/*
堆排序
*/

class Solution
{
public:
	void AdjustDown(vector<int>& arr, int size, int parent)
	{
		while (parent * 2 + 1 < size)
		{
			int child = parent * 2 + 1;
			if (child + 1 < size && arr[child + 1] > arr[child])
				++child;
			if (arr[parent] >= arr[child])
				break;
			swap(arr[parent], arr[child]);
			parent = child;
		}
	}
	
	vector<int> MySort(vector<int>& arr)
	{
		for (int i = (arr.size() - 2) / 2; i >= 0; --i)
			AdjustDown(arr, arr.size(), i);
		
		for (int end = arr.size() - 1; end > 0; --end)
		{
			swap(arr[0], arr[end]);
			AdjustDown(arr, end, 0);
		}
		
		return arr;
	}
};