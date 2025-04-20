/*
插入排序
*/

class Solution
{
public:
	vector<int> MySort(vector<int>& arr)
	{
		for (int i = 1; i < arr.size(); ++i)
		{
			int key = arr[i];
			int index = i - 1;
			while (index >= 0 && arr[index] > key)
			{
				arr[index + 1] = arr[index];
				--index;
			}
			arr[index + 1] = key;
		}
		return arr;
	}
};