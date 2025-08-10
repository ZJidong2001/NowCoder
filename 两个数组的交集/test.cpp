class Solution
{
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
        vector<int> ret;

        vector<bool> common(1001);
        for (auto num : nums1)
            common[num] = true;
        for (auto num : nums2)
            if (common[num] == true)
            {
                ret.push_back(num);
                common[num] = false;
            }

        return ret;
    }
};