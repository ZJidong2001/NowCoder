/*
希尔排序
*/

class Solution
{
public:
	vector<int> MySort(vector<int>& arr)
	{
		int gap = arr.size();
		while (gap > 1)
		{
			gap = gap / 3 + 1;
			for (int i = gap; i < arr.size(); ++i)
			{
				int key = arr[i];
				int index = i - gap;
				while (index >= 0 && arr[index] > key)
				{
					arr[index + gap] = arr[index];
					index -= gap;
				}
				arr[index + gap] = key;
			}
		}
		return arr;
	}
};